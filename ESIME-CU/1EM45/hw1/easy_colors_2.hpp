#ifndef EASY_COLORS_2_HPP
#define EASY_COLORS_2_HPP

#include <string>

namespace easy_colors
{
    const std::string fg_black   = "\x1b[30m";
    const std::string fg_red     = "\x1b[31m";
    const std::string fg_green   = "\x1b[32m";
    const std::string fg_yellow  = "\x1b[33m";
    const std::string fg_blue    = "\x1b[34m";
    const std::string fg_magenta = "\x1b[35m";
    const std::string fg_cyan    = "\x1b[36m";
    const std::string fg_white   = "\x1b[37m";

    const std::string fg_b_black   = "\x1b[90m";
    const std::string fg_b_red     = "\x1b[91m";
    const std::string fg_b_green   = "\x1b[92m";
    const std::string fg_b_yellow  = "\x1b[93m";
    const std::string fg_b_blue    = "\x1b[94m";
    const std::string fg_b_magenta = "\x1b[95m";
    const std::string fg_b_cyan    = "\x1b[96m";
    const std::string fg_b_white   = "\x1b[97m";

    const std::string bg_black   = "\x1b[40m";
    const std::string bg_red     = "\x1b[41m";
    const std::string bg_green   = "\x1b[42m";
    const std::string bg_yellow  = "\x1b[43m";
    const std::string bg_blue    = "\x1b[44m";
    const std::string bg_magenta = "\x1b[45m";
    const std::string bg_cyan    = "\x1b[46m";
    const std::string bg_white   = "\x1b[47m";

    const std::string bg_b_black   = "\x1b[100m";
    const std::string bg_b_red     = "\x1b[101m";
    const std::string bg_b_green   = "\x1b[102m";
    const std::string bg_b_yellow  = "\x1b[103m";
    const std::string bg_b_blue    = "\x1b[104m";
    const std::string bg_b_magenta = "\x1b[105m";
    const std::string bg_b_cyan    = "\x1b[106m";
    const std::string bg_b_white   = "\x1b[107m";

    const std::string normal = "\x1b[0m";

    std::string fg_rgb(short r, short g, short b)
    {
        std::string rgb_esc_sequence("\x1b[38;2;");
        rgb_esc_sequence += std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + 'm';
        return rgb_esc_sequence;
    }

    std::string bg_rgb(short r, short g, short b)
    {
        std::string rgb_esc_sequence("\x1b[48;2;");
        rgb_esc_sequence += std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + 'm';
        return rgb_esc_sequence;
    }
}

#endif // EASY_COLORS_2_HPP