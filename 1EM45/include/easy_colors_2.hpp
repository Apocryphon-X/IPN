#ifndef EASY_COLORS_2_HPP
#define EASY_COLORS_2_HPP

#include <string>

namespace easy_colors
{
    const std::string black   = "\x1b[30m";
    const std::string red     = "\x1b[31m";
    const std::string green   = "\x1b[32m";
    const std::string yellow  = "\x1b[33m";
    const std::string blue    = "\x1b[34m";
    const std::string magenta = "\x1b[35m";
    const std::string cyan    = "\x1b[36m";
    const std::string white   = "\x1b[37m";

    const std::string b_black   = "\x1b[90m";
    const std::string b_red     = "\x1b[91m";
    const std::string b_green   = "\x1b[92m";
    const std::string b_yellow  = "\x1b[93m";
    const std::string b_blue    = "\x1b[94m";
    const std::string b_magenta = "\x1b[95m";
    const std::string b_cyan    = "\x1b[96m";
    const std::string b_white   = "\x1b[97m";

    const std::string on_black   = "\x1b[40m";
    const std::string on_red     = "\x1b[41m";
    const std::string on_green   = "\x1b[42m";
    const std::string on_yellow  = "\x1b[43m";
    const std::string on_blue    = "\x1b[44m";
    const std::string on_magenta = "\x1b[45m";
    const std::string on_cyan    = "\x1b[46m";
    const std::string on_white   = "\x1b[47m";

    const std::string on_b_black   = "\x1b[100m";
    const std::string on_b_red     = "\x1b[101m";
    const std::string on_b_green   = "\x1b[102m";
    const std::string on_b_yellow  = "\x1b[103m";
    const std::string on_b_blue    = "\x1b[104m";
    const std::string on_b_magenta = "\x1b[105m";
    const std::string on_b_cyan    = "\x1b[106m";
    const std::string on_b_white   = "\x1b[107m";

    const std::string normal = "\x1b[0m";

    const std::string bold      = "\x1b[1m";
    const std::string dim       = "\x1b[2m";
    const std::string italic    = "\x1b[3m";
    const std::string underline = "\x1b[4m";
    const std::string blink     = "\x1b[5m";
    const std::string reverse   = "\x1b[7m";
    const std::string conceal   = "\x1b[8m";
    const std::string strike    = "\x1b[9m";

    std::string rgb(short r, short g, short b)
    {
        std::string rgb_esc_sequence("\x1b[38;2;");
        rgb_esc_sequence += std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + 'm';
        return rgb_esc_sequence;
    }

    std::string on_rgb(short r, short g, short b)
    {
        std::string rgb_esc_sequence("\x1b[48;2;");
        rgb_esc_sequence += std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + 'm';
        return rgb_esc_sequence;
    }
}

#endif // EASY_COLORS_2_HPP
