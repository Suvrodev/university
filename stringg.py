class String:
    @classmethod
    def Length(cls, string):
        length = 0
        try:
            while True:
                string[length]
                length += 1
        except IndexError:
            return length

    @classmethod
    def Index(cls, text, pattern):
        text_length = cls.Length(text)
        pattern_length = cls.Length(pattern)
        flag = True
        for i in range(text_length - pattern_length + 1):
            for j in range(pattern_length):
                if text[i + j] != pattern[j]:
                    flag = False
                    break
                else:
                    flag = True
            if flag:
                return i
        return 0

    @classmethod
    def Concatenate(cls, string1, string2):
        new_str_size = cls.Length(string1) + cls.Length(string2)
        new_str = [i for i in range(new_str_size)]
        strlen1 = cls.Length(string1)
        for i in range(cls.Length(string1)):
            new_str[i] = string1[i]
        for i in range(cls.Length(string2)):
            new_str[strlen1 + i] = string2[i]
        return "".join(new_str)

    @classmethod
    def Substring(cls, string, initial, length):
        new_str = ""
        for i in range(initial - 1, initial + length - 1):
            new_str = cls.Concatenate(new_str, string[i])
        return new_str

    @classmethod
    def Insert(cls, text, position, string):
        return cls.Concatenate(
            cls.Concatenate(cls.Substring(text, 1, position - 1), string),
            cls.Substring(text, position, cls.Length(text) - position + 1),
        )

    @classmethod
    def Delete(cls, text, position, length):
        return cls.Concatenate(
            cls.Substring(text, 1, position - 1),
            cls.Substring(
                text, position + length, cls.Length(text) - position - length + 1
            ),
        )

    @classmethod
    def Replace_all(cls, text, pattern1, pattern2):
        patern_position = cls.Index(text, pattern1)
        while patern_position != 0:
            text = cls.Replace(text, pattern1, pattern2)
            patern_position = cls.Index(text, pattern1)
        return text

    @classmethod
    def Replace(cls, text, pattern1, pattern2):
        pattern1_position = cls.Index(text, pattern1)
        return cls.Concatenate(
            cls.Substring(text, 1, pattern1_position),
            cls.Concatenate(
                pattern2,
                cls.Substring(
                    text,
                    pattern1_position + cls.Length(pattern1) + 1,
                    cls.Length(text) - (pattern1_position + cls.Length(pattern1)),
                ),
            ),
        )
