#ifndef EASY_COLORS_1_HPP
#define EASY_COLORS_1_HPP

#include <string>

struct
{
    const std::string FG_BLACK   = "\x1b[30m";
    const std::string FG_RED     = "\x1b[31m";
    const std::string FG_GREEN   = "\x1b[32m";
    const std::string FG_YELLOW  = "\x1b[33m";
    const std::string FG_BLUE    = "\x1b[34m";
    const std::string FG_MAGENTA = "\x1b[35m";
    const std::string FG_CYAN    = "\x1b[36m";
    const std::string FG_WHITE   = "\x1b[37m";

    const std::string FG_B_BLACK   = "\x1b[90m";
    const std::string FG_B_RED     = "\x1b[91m";
    const std::string FG_B_GREEN   = "\x1b[92m";
    const std::string FG_B_YELLOW  = "\x1b[93m";
    const std::string FG_B_BLUE    = "\x1b[94m";
    const std::string FG_B_MAGENTA = "\x1b[95m";
    const std::string FG_B_CYAN    = "\x1b[96m";
    const std::string FG_B_WHITE   = "\x1b[97m";

    const std::string BG_BLACK   = "\x1b[40m";
    const std::string BG_RED     = "\x1b[41m";
    const std::string BG_GREEN   = "\x1b[42m";
    const std::string BG_YELLOW  = "\x1b[43m";
    const std::string BG_BLUE    = "\x1b[44m";
    const std::string BG_MAGENTA = "\x1b[45m";
    const std::string BG_CYAN    = "\x1b[46m";
    const std::string BG_WHITE   = "\x1b[47m";

    const std::string BG_B_BLACK   = "\x1b[100m";
    const std::string BG_B_RED     = "\x1b[101m";
    const std::string BG_B_GREEN   = "\x1b[102m";
    const std::string BG_B_YELLOW  = "\x1b[103m";
    const std::string BG_B_BLUE    = "\x1b[104m";
    const std::string BG_B_MAGENTA = "\x1b[105m";
    const std::string BG_B_CYAN    = "\x1b[106m";
    const std::string BG_B_WHITE   = "\x1b[107m";

    const std::string NORMAL = "\x1b[0m";

    const std::string FG_RGB(short r, short g, short b)
    {
        std::string rgb_esc_sequence("\x1b[38;2;");
        rgb_esc_sequence += std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + 'm';
        return rgb_esc_sequence;
    }

    const std::string BG_RGB(short r, short g, short b)
    {
        std::string rgb_esc_sequence("\x1b[48;2;");
        rgb_esc_sequence += std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + 'm';
        return rgb_esc_sequence;
    }

} COLOR;

#endif // EASY_COLORS_1_HPP
