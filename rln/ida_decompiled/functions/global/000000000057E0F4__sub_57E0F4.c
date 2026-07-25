/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057E0F4
 * Mangled: sub_57E0F4
 * Demangled: sub_57E0F4
 *
 * Callers: 2
 *   0x000000000057A6E8  sub_57A6E8
 *   0x000000000057E974  sub_57E974
 *
 * Callees: 1
 *   0x000000000057A6E8  sub_57A6E8
 *
 * Referenced strings: 322
 *   insn=0x000000000057E100 string=0x000000000057E104 "@"
 *   insn=0x000000000057E11C string=0x000000000057E120 ")"
 *   insn=0x000000000057E13C string=0x000000000057E140 "j"
 *   insn=0x000000000057E144 string=0x000000000057E14C " X`xa"
 *   insn=0x000000000057E14C string=0x000000000057E150 "a"
 *   insn=0x000000000057E150 string=0x000000000057E154 " "
 *   insn=0x000000000057E158 string=0x000000000057E1CC "B"
 *   insn=0x000000000057E158 string=0x000000000057E2B4 "a"
 *   insn=0x000000000057E158 string=0x000000000057E380 "`"
 *   insn=0x000000000057E158 string=0x000000000057E3D0 "`"
 *   insn=0x000000000057E158 string=0x000000000057E43C "a"
 *   insn=0x000000000057E158 string=0x000000000057E494 "a"
 *   insn=0x000000000057E158 string=0x000000000057E49C "a"
 *   insn=0x000000000057E158 string=0x000000000057E584 "`"D9"
 *   insn=0x000000000057E15C string=0x00000000005A09C8 " __vector("
 *   insn=0x000000000057E160 string=0x000000000057E164 "a"
 *   insn=0x000000000057E16C string=0x000000000057E170 "\t"
 *   insn=0x000000000057E170 string=0x000000000057E194 "?"
 *   insn=0x000000000057E174 string=0x000000000057E178 "!"
 *   insn=0x000000000057E178 string=0x000000000057E17C "a"
 *   insn=0x000000000057E180 string=0x000000000057E184 "vj 8"
 *   insn=0x000000000057E188 string=0x000000000057E18C "v""
 *   insn=0x000000000057E18C string=0x000000000057E190 "@$"
 *   insn=0x000000000057E19C string=0x000000000057E1A0 "b"
 *   insn=0x000000000057E1A4 string=0x000000000057E1A8 "c"
 *   insn=0x000000000057E1AC string=0x000000000057E1B0 "`"
 *   insn=0x000000000057E1B0 string=0x000000000057E1B4 "b"
 *   insn=0x000000000057E1B4 string=0x000000000057E1B8 "!"
 *   insn=0x000000000057E1BC string=0x000000000057E1C0 "B"
 *   insn=0x000000000057E1C0 string=0x000000000057E1C4 "b"
 *   insn=0x000000000057E1DC string=0x000000000057E1E0 "a"
 *   insn=0x000000000057E1DC string=0x00000000005A0988 " restrict"
 *   insn=0x000000000057E1E8 string=0x000000000057E1EC "\t"
 *   insn=0x000000000057E1EC string=0x000000000057E210 "?"
 *   insn=0x000000000057E1F0 string=0x000000000057E1F4 "!"
 *   insn=0x000000000057E1F4 string=0x000000000057E1F8 "a"
 *   insn=0x000000000057E1FC string=0x000000000057E200 "uj 8"
 *   insn=0x000000000057E204 string=0x000000000057E208 "u""
 *   insn=0x000000000057E218 string=0x000000000057E21C "b"
 *   insn=0x000000000057E220 string=0x000000000057E224 "c"
 *   insn=0x000000000057E228 string=0x000000000057E22C "`"
 *   insn=0x000000000057E22C string=0x000000000057E230 "b"
 *   insn=0x000000000057E230 string=0x000000000057E234 "!"
 *   insn=0x000000000057E238 string=0x000000000057E23C "B"
 *   insn=0x000000000057E23C string=0x000000000057E240 "b"
 *   insn=0x000000000057E248 string=0x000000000057E24C "a"
 *   insn=0x000000000057E248 string=0x00000000005A0998 " volatile"
 *   insn=0x000000000057E254 string=0x000000000057E258 "\t"
 *   insn=0x000000000057E258 string=0x000000000057E27C "?"
 *   insn=0x000000000057E25C string=0x000000000057E260 "!"
 *   insn=0x000000000057E260 string=0x000000000057E264 "a"
 *   insn=0x000000000057E268 string=0x000000000057E26C "uj 8"
 *   insn=0x000000000057E270 string=0x000000000057E274 "u""
 *   insn=0x000000000057E274 string=0x000000000057E278 " \n"
 *   insn=0x000000000057E284 string=0x000000000057E288 "b"
 *   insn=0x000000000057E28C string=0x000000000057E290 "c"
 *   insn=0x000000000057E294 string=0x000000000057E298 "`"
 *   insn=0x000000000057E298 string=0x000000000057E29C "b"
 *   insn=0x000000000057E29C string=0x000000000057E2A0 "!"
 *   insn=0x000000000057E2A4 string=0x000000000057E2A8 "B"
 *   insn=0x000000000057E2A8 string=0x000000000057E2AC "b"
 *   insn=0x000000000057E2B4 string=0x000000000057E2B8 "?"
 *   insn=0x000000000057E2BC string=0x000000000057E2C0 "#"
 *   insn=0x000000000057E2BC string=0x000000000057E8B0 "c"
 *   insn=0x000000000057E2C0 string=0x000000000057E2C4 "c"
 *   insn=0x000000000057E2C8 string=0x000000000057E2CC "`j!8`""
 *   insn=0x000000000057E2CC string=0x000000000057E2D0 "`""
 *   insn=0x000000000057E2D4 string=0x000000000057E2D8 "t"
 *   insn=0x000000000057E2DC string=0x000000000057E2E0 "a"
 *   insn=0x000000000057E2DC string=0x000000000057E67C "d"
 *   insn=0x000000000057E2E0 string=0x000000000057E2E4 "a"
 *   insn=0x000000000057E2E4 string=0x000000000057E2E8 "tj#8?"
 *   insn=0x000000000057E2E8 string=0x000000000057E2EC "?"
 *   insn=0x000000000057E2EC string=0x000000000057E2F0 "t""
 *   insn=0x000000000057E2F8 string=0x000000000057E2FC "#"
 *   insn=0x000000000057E2F8 string=0x000000000057E84C "c"
 *   insn=0x000000000057E2FC string=0x000000000057E300 "c"
 *   insn=0x000000000057E300 string=0x000000000057E304 "tj!8"
 *   insn=0x000000000057E308 string=0x000000000057E30C "t""
 *   insn=0x000000000057E314 string=0x000000000057E318 "a"
 *   insn=0x000000000057E314 string=0x000000000057E810 "d"
 *   insn=0x000000000057E318 string=0x000000000057E31C "a"
 *   insn=0x000000000057E31C string=0x000000000057E320 "uj#8?"
 *   insn=0x000000000057E320 string=0x000000000057E324 "?"
 *   insn=0x000000000057E324 string=0x000000000057E328 "u""
 *   insn=0x000000000057E328 string=0x000000000057E32C "u"
 *   insn=0x000000000057E330 string=0x000000000057E334 " "
 *   insn=0x000000000057E330 string=0x000000000057E7E0 "c"
 *   insn=0x000000000057E334 string=0x000000000057E338 "`"
 *   insn=0x000000000057E338 string=0x000000000057E33C "uj!8"
 *   insn=0x000000000057E340 string=0x000000000057E344 "u""
 *   insn=0x000000000057E348 string=0x000000000057E34C "a"
 *   insn=0x000000000057E34C string=0x000000000057E350 "b"
 *   insn=0x000000000057E354 string=0x000000000057E358 "c"
 *   insn=0x000000000057E360 string=0x000000000057E364 "`"
 *   insn=0x000000000057E364 string=0x000000000057E368 "b"
 *   insn=0x000000000057E368 string=0x000000000057E36C "!"
 *   insn=0x000000000057E370 string=0x000000000057E374 "B"
 *   insn=0x000000000057E374 string=0x000000000057E378 "b"
 *   insn=0x000000000057E378 string=0x000000000057E37C "("
 *   insn=0x000000000057E37C string=0x000000000057E41C "a"
 *   insn=0x000000000057E384 string=0x000000000057E388 " +"
 *   insn=0x000000000057E388 string=0x000000000057E8EC "b"
 *   insn=0x000000000057E38C string=0x000000000057E390 "a"
 *   insn=0x000000000057E394 string=0x000000000057E398 "bj 8b""
 *   insn=0x000000000057E398 string=0x000000000057E39C "b""
 *   insn=0x000000000057E39C string=0x000000000057E3A0 "?"
 *   insn=0x000000000057E3A4 string=0x000000000057E3A8 " "
 *   insn=0x000000000057E3A4 string=0x000000000057E71C "b"
 *   insn=0x000000000057E3A8 string=0x000000000057E3AC "`"
 *   insn=0x000000000057E3B0 string=0x000000000057E3B4 "`j!8`""
 *   insn=0x000000000057E3B4 string=0x000000000057E3B8 "`""
 *   insn=0x000000000057E3D8 string=0x000000000057E748 "b"
 *   insn=0x000000000057E3DC string=0x000000000057E3E0 "a"
 *   insn=0x000000000057E3E4 string=0x000000000057E3E8 "bj 8b""
 *   insn=0x000000000057E3E8 string=0x000000000057E3EC "b""
 *   insn=0x000000000057E3EC string=0x000000000057E3F0 "?"
 *   insn=0x000000000057E3F4 string=0x000000000057E3F8 " "
 *   insn=0x000000000057E3F4 string=0x000000000057E6E8 "b"
 *   insn=0x000000000057E3F8 string=0x000000000057E3FC "`"
 *   insn=0x000000000057E400 string=0x000000000057E404 "bj!8b""
 *   insn=0x000000000057E404 string=0x000000000057E408 "b""
 *   insn=0x000000000057E41C string=0x000000000057E420 "tj 8t""
 *   insn=0x000000000057E420 string=0x000000000057E424 "t""
 *   insn=0x000000000057E43C string=0x000000000057E440 "?"
 *   insn=0x000000000057E444 string=0x000000000057E448 " "
 *   insn=0x000000000057E444 string=0x000000000057E884 "b"
 *   insn=0x000000000057E448 string=0x000000000057E44C "`"
 *   insn=0x000000000057E450 string=0x000000000057E454 "bj!8"
 *   insn=0x000000000057E458 string=0x000000000057E45C "b""
 *   insn=0x000000000057E464 string=0x000000000057E468 "2"
 *   insn=0x000000000057E46C string=0x000000000057E470 "a"
 *   insn=0x000000000057E470 string=0x000000000057E474 "?"
 *   insn=0x000000000057E478 string=0x000000000057E47C " "
 *   insn=0x000000000057E478 string=0x000000000057E948 "b"
 *   insn=0x000000000057E47C string=0x000000000057E480 "`"
 *   insn=0x000000000057E480 string=0x000000000057E484 "@"
 *   insn=0x000000000057E484 string=0x000000000057E488 "`j!8`""
 *   insn=0x000000000057E488 string=0x000000000057E48C "`""
 *   insn=0x000000000057E4A4 string=0x00000000005A09A8 "complex "
 *   insn=0x000000000057E4A8 string=0x000000000057E4AC "a"
 *   insn=0x000000000057E4B4 string=0x000000000057E4B8 "\t"
 *   insn=0x000000000057E4B8 string=0x000000000057E4DC "?"
 *   insn=0x000000000057E4BC string=0x000000000057E4C0 "!"
 *   insn=0x000000000057E4C0 string=0x000000000057E4C4 "a"
 *   insn=0x000000000057E4C8 string=0x000000000057E4CC "uj 8"
 *   insn=0x000000000057E4D0 string=0x000000000057E4D4 "u""
 *   insn=0x000000000057E4D4 string=0x000000000057E4D8 " "
 *   insn=0x000000000057E4E4 string=0x000000000057E4E8 "b"
 *   insn=0x000000000057E4EC string=0x000000000057E4F0 "c"
 *   insn=0x000000000057E4F4 string=0x000000000057E4F8 "`"
 *   insn=0x000000000057E4F8 string=0x000000000057E4FC "b"
 *   insn=0x000000000057E4FC string=0x000000000057E500 "!"
 *   insn=0x000000000057E504 string=0x000000000057E508 "B"
 *   insn=0x000000000057E508 string=0x000000000057E50C "b"
 *   insn=0x000000000057E514 string=0x00000000005A09B8 "imaginary "
 *   insn=0x000000000057E518 string=0x000000000057E51C "a"
 *   insn=0x000000000057E524 string=0x000000000057E528 "\t"
 *   insn=0x000000000057E528 string=0x000000000057E54C "?"
 *   insn=0x000000000057E52C string=0x000000000057E530 "!"
 *   insn=0x000000000057E530 string=0x000000000057E534 "a"
 *   insn=0x000000000057E538 string=0x000000000057E53C "uj 8"
 *   insn=0x000000000057E540 string=0x000000000057E544 "u""
 *   insn=0x000000000057E554 string=0x000000000057E558 "b"
 *   insn=0x000000000057E55C string=0x000000000057E560 "c"
 *   insn=0x000000000057E564 string=0x000000000057E568 "`"
 *   insn=0x000000000057E568 string=0x000000000057E56C "b"
 *   insn=0x000000000057E56C string=0x000000000057E570 "!"
 *   insn=0x000000000057E574 string=0x000000000057E578 "B"
 *   insn=0x000000000057E578 string=0x000000000057E57C "b"
 *   insn=0x000000000057E588 string=0x000000000057E58C " "
 *   insn=0x000000000057E58C string=0x000000000057E590 "a"
 *   insn=0x000000000057E590 string=0x000000000057E594 "?"
 *   insn=0x000000000057E594 string=0x000000000057E598 " "
 *   insn=0x000000000057E598 string=0x000000000057E59C " "
 *   insn=0x000000000057E598 string=0x000000000057E91C "b"
 *   insn=0x000000000057E59C string=0x000000000057E5A0 "`"
 *   insn=0x000000000057E5A4 string=0x000000000057E5A8 "`j!8`""
 *   insn=0x000000000057E5A8 string=0x000000000057E5AC "`""
 *   insn=0x000000000057E5B8 string=0x000000000057E5BC "K"
 *   insn=0x000000000057E5BC string=0x000000000057E5C0 "c"
 *   insn=0x000000000057E5C8 string=0x000000000057E5CC "a"
 *   insn=0x000000000057E5C8 string=0x000000000057E7A4 "b"
 *   insn=0x000000000057E5CC string=0x000000000057E5D0 "a"
 *   insn=0x000000000057E5D0 string=0x000000000057E5D4 "T"
 *   insn=0x000000000057E5D4 string=0x000000000057E5D8 "tj#8t""
 *   insn=0x000000000057E5D8 string=0x000000000057E5DC "t""
 *   insn=0x000000000057E5DC string=0x000000000057E5E0 "?"
 *   insn=0x000000000057E5E4 string=0x000000000057E5E8 " "
 *   insn=0x000000000057E5E4 string=0x000000000057E6B8 "c"
 *   insn=0x000000000057E5E8 string=0x000000000057E5EC "`"
 *   insn=0x000000000057E5EC string=0x000000000057E5F0 "tj!8"
 *   insn=0x000000000057E5F4 string=0x000000000057E5F8 "t""
 *   insn=0x000000000057E5F8 string=0x000000000057E5FC "U"
 *   insn=0x000000000057E5FC string=0x000000000057E600 "`"
 *   insn=0x000000000057E600 string=0x000000000057E64C "b"
 *   insn=0x000000000057E604 string=0x000000000057E608 "a"
 *   insn=0x000000000057E608 string=0x000000000057E60C "uj 8u""
 *   insn=0x000000000057E60C string=0x000000000057E610 "u""
 *   insn=0x000000000057E610 string=0x000000000057E614 "j"
 *   insn=0x000000000057E620 string=0x000000000057E624 "1"
 *   insn=0x000000000057E624 string=0x000000000057E628 "a"
 *   insn=0x000000000057E628 string=0x000000000057E62C "?"
 *   insn=0x000000000057E62C string=0x000000000057E630 "@\n"
 *   insn=0x000000000057E630 string=0x000000000057E634 " "
 *   insn=0x000000000057E630 string=0x000000000057E778 "b"
 *   insn=0x000000000057E634 string=0x000000000057E638 "`"
 *   insn=0x000000000057E638 string=0x000000000057E63C " "
 *   insn=0x000000000057E63C string=0x000000000057E640 "`j!8`""
 *   insn=0x000000000057E640 string=0x000000000057E644 "`""
 *   insn=0x000000000057E644 string=0x000000000057E648 "]"
 *   insn=0x000000000057E650 string=0x000000000057E654 "c"
 *   insn=0x000000000057E65C string=0x000000000057E660 "`"
 *   insn=0x000000000057E660 string=0x000000000057E664 "b"
 *   insn=0x000000000057E664 string=0x000000000057E668 "!"
 *   insn=0x000000000057E66C string=0x000000000057E670 "B"
 *   insn=0x000000000057E670 string=0x000000000057E674 "b"
 *   insn=0x000000000057E680 string=0x000000000057E684 "b"
 *   insn=0x000000000057E694 string=0x000000000057E698 "t"
 *   insn=0x000000000057E698 string=0x000000000057E69C "`"
 *   insn=0x000000000057E69C string=0x000000000057E6A0 "C"
 *   insn=0x000000000057E6A4 string=0x000000000057E6A8 "`"
 *   insn=0x000000000057E6AC string=0x000000000057E6B0 "`"
 *   insn=0x000000000057E6BC string=0x000000000057E6C0 "b"
 *   insn=0x000000000057E6C0 string=0x000000000057E6C4 "U"
 *   insn=0x000000000057E6C8 string=0x000000000057E6CC "`"
 *   insn=0x000000000057E6CC string=0x000000000057E6D0 "t"
 *   insn=0x000000000057E6D0 string=0x000000000057E6D4 "a"
 *   insn=0x000000000057E6D4 string=0x000000000057E6D8 " "
 *   insn=0x000000000057E6D8 string=0x000000000057E6DC "!"
 *   insn=0x000000000057E6DC string=0x000000000057E6E0 "a"
 *   insn=0x000000000057E6EC string=0x000000000057E6F0 "c"
 *   insn=0x000000000057E6F8 string=0x000000000057E6FC "`"
 *   insn=0x000000000057E6FC string=0x000000000057E700 "a"
 *   insn=0x000000000057E700 string=0x000000000057E704 " "
 *   insn=0x000000000057E708 string=0x000000000057E70C "b"
 *   insn=0x000000000057E70C string=0x000000000057E710 "!"
 *   insn=0x000000000057E710 string=0x000000000057E714 "a"
 *   insn=0x000000000057E714 string=0x000000000057E718 "@"
 *   insn=0x000000000057E720 string=0x000000000057E724 "c"
 *   insn=0x000000000057E728 string=0x000000000057E72C "`"
 *   insn=0x000000000057E72C string=0x000000000057E730 "b"
 *   insn=0x000000000057E730 string=0x000000000057E734 " "
 *   insn=0x000000000057E738 string=0x000000000057E73C "B"
 *   insn=0x000000000057E73C string=0x000000000057E740 "b"
 *   insn=0x000000000057E74C string=0x000000000057E750 "c"
 *   insn=0x000000000057E758 string=0x000000000057E75C "`"
 *   insn=0x000000000057E75C string=0x000000000057E760 "b"
 *   insn=0x000000000057E760 string=0x000000000057E764 "!"
 *   insn=0x000000000057E768 string=0x000000000057E76C "B"
 *   insn=0x000000000057E76C string=0x000000000057E770 "b"
 *   insn=0x000000000057E770 string=0x000000000057E774 ""
 *   insn=0x000000000057E77C string=0x000000000057E780 "c"
 *   insn=0x000000000057E784 string=0x000000000057E788 "`"
 *   insn=0x000000000057E788 string=0x000000000057E78C "b"
 *   insn=0x000000000057E78C string=0x000000000057E790 " "
 *   insn=0x000000000057E794 string=0x000000000057E798 "B"
 *   insn=0x000000000057E798 string=0x000000000057E79C "b"
 *   insn=0x000000000057E7A8 string=0x000000000057E7AC "d"
 *   insn=0x000000000057E7B4 string=0x000000000057E7B8 "U"
 *   insn=0x000000000057E7BC string=0x000000000057E7C0 "a"
 *   insn=0x000000000057E7C0 string=0x000000000057E7C4 "B"
 *   insn=0x000000000057E7C4 string=0x000000000057E7C8 "@"
 *   insn=0x000000000057E7C8 string=0x000000000057E7CC "b"
 *   insn=0x000000000057E7CC string=0x000000000057E7D0 "!"
 *   insn=0x000000000057E7D0 string=0x000000000057E7D4 "b"
 *   insn=0x000000000057E7D4 string=0x000000000057E7D8 "a"
 *   insn=0x000000000057E7E4 string=0x000000000057E7E8 "b"
 *   insn=0x000000000057E7F0 string=0x000000000057E7F4 "`"
 *   insn=0x000000000057E7F4 string=0x000000000057E7F8 "u"
 *   insn=0x000000000057E7F8 string=0x000000000057E7FC "a"
 *   insn=0x000000000057E7FC string=0x000000000057E800 " "
 *   insn=0x000000000057E800 string=0x000000000057E804 "!"
 *   insn=0x000000000057E804 string=0x000000000057E808 "a"
 *   insn=0x000000000057E814 string=0x000000000057E818 "b"
 *   insn=0x000000000057E828 string=0x000000000057E82C "u"
 *   insn=0x000000000057E82C string=0x000000000057E830 "a"
 *   insn=0x000000000057E830 string=0x000000000057E834 "@"
 *   insn=0x000000000057E834 string=0x000000000057E838 "!"
 *   insn=0x000000000057E838 string=0x000000000057E83C "a"
 *   insn=0x000000000057E83C string=0x000000000057E840 "a"
 *   insn=0x000000000057E840 string=0x000000000057E844 "a"
 *   insn=0x000000000057E850 string=0x000000000057E854 "b"
 *   insn=0x000000000057E854 string=0x000000000057E858 "u"
 *   insn=0x000000000057E85C string=0x000000000057E860 "`"
 *   insn=0x000000000057E860 string=0x000000000057E864 "t"
 *   insn=0x000000000057E864 string=0x000000000057E868 "`"
 *   insn=0x000000000057E868 string=0x000000000057E86C "A"
 *   insn=0x000000000057E870 string=0x000000000057E874 "`"
 *   insn=0x000000000057E878 string=0x000000000057E87C "`"
 *   insn=0x000000000057E888 string=0x000000000057E88C "c"
 *   insn=0x000000000057E890 string=0x000000000057E894 "`"
 *   insn=0x000000000057E894 string=0x000000000057E898 "b"
 *   insn=0x000000000057E898 string=0x000000000057E89C " "
 *   insn=0x000000000057E8A0 string=0x000000000057E8A4 "B"
 *   insn=0x000000000057E8A4 string=0x000000000057E8A8 "b"
 *   insn=0x000000000057E8B4 string=0x000000000057E8B8 "b"
 *   insn=0x000000000057E8C0 string=0x000000000057E8C4 "`"
 *   insn=0x000000000057E8C4 string=0x000000000057E8C8 "`"
 *   insn=0x000000000057E8CC string=0x000000000057E8D0 "a"
 *   insn=0x000000000057E8D0 string=0x000000000057E8D4 "A"
 *   insn=0x000000000057E8D8 string=0x000000000057E8DC "`"
 *   insn=0x000000000057E8DC string=0x000000000057E8E0 "`"
 *   insn=0x000000000057E8E0 string=0x000000000057E8E4 "`"
 *   insn=0x000000000057E8F0 string=0x000000000057E8F4 "c"
 *   insn=0x000000000057E8FC string=0x000000000057E900 "`"
 *   insn=0x000000000057E900 string=0x000000000057E904 "b"
 *   insn=0x000000000057E904 string=0x000000000057E908 "!"
 *   insn=0x000000000057E90C string=0x000000000057E910 "B"
 *   insn=0x000000000057E910 string=0x000000000057E914 "b"
 *   insn=0x000000000057E920 string=0x000000000057E924 "c"
 *   insn=0x000000000057E928 string=0x000000000057E92C "`"
 *   insn=0x000000000057E92C string=0x000000000057E930 "b"
 *   insn=0x000000000057E930 string=0x000000000057E934 " "
 *   insn=0x000000000057E938 string=0x000000000057E93C "B"
 *   insn=0x000000000057E93C string=0x000000000057E940 "b"
 *   insn=0x000000000057E94C string=0x000000000057E950 "c"
 *   insn=0x000000000057E954 string=0x000000000057E958 "`"
 *   insn=0x000000000057E958 string=0x000000000057E95C "b"
 *   insn=0x000000000057E95C string=0x000000000057E960 " "
 *   insn=0x000000000057E964 string=0x000000000057E968 "B"
 *   insn=0x000000000057E968 string=0x000000000057E96C "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57E0F4(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // x0
  __int64 v7; // x1
  const char *v8; // x20
  __int64 v9; // x0
  char v10; // w22
  __int64 v11; // x2
  void (__fastcall *v12)(__int64, __int64, __int64); // x3
  __int64 v13; // x1
  __int64 i; // x20
  char v15; // w21
  __int64 v16; // x2
  void (__fastcall *v17)(__int64, __int64, __int64); // x3
  __int64 v18; // x1
  __int64 j; // x20
  char v20; // w21
  __int64 v21; // x2
  void (__fastcall *v22)(__int64, __int64, __int64); // x3
  __int64 v23; // x1
  __int64 v24; // x3
  __int64 v25; // x1
  __int64 v26; // x3
  __int64 v27; // x1
  char v28; // w20
  __int64 v29; // x2
  void (__fastcall *v30)(__int64, __int64, __int64); // x3
  __int64 v31; // x1
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x0
  __int64 v41; // x1
  const char *v42; // x20
  char v43; // w21
  __int64 v44; // x2
  void (__fastcall *v45)(__int64, __int64, __int64); // x3
  __int64 v46; // x1
  const char *v47; // x20
  char v48; // w21
  __int64 v49; // x2
  void (__fastcall *v50)(__int64, __int64, __int64); // x3
  __int64 v51; // x1
  __int64 v52; // x0
  __int64 v53; // x3
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x0
  __int64 v57; // x2
  void (__fastcall *v58)(__int64, __int64, __int64); // x3
  void (__fastcall *v59)(__int64, __int64, __int64); // x4
  __int64 v60; // x2
  void (__fastcall *v61)(__int64); // x3
  __int64 v62; // x2
  void (__fastcall *v63)(__int64, __int64, __int64); // x3
  __int64 v64; // x1
  __int64 v65; // x2
  void (__fastcall *v66)(__int64, __int64, __int64); // x3
  __int64 v67; // x2
  void (__fastcall *v68)(__int64, __int64, __int64); // x3
  __int64 v69; // x2
  void (__fastcall *v70)(__int64, __int64, __int64); // x3
  __int64 v71; // x2
  void (__fastcall *v72)(__int64, __int64, __int64); // x4
  __int64 v73; // x1
  void (__fastcall *v74)(__int64); // x3
  void (__fastcall *v75)(__int64, __int64, __int64); // x4
  __int64 v76; // x2
  void (__fastcall *v77)(__int64); // x3
  __int64 v78; // x2
  void (__fastcall *v79)(__int64, __int64, __int64); // x3
  void (__fastcall *v80)(__int64, __int64, __int64); // x3
  __int64 v81; // x2
  __int64 v82; // x0
  __int64 v83; // x2
  void (__fastcall *v84)(__int64, __int64, __int64); // x3
  __int64 v85; // x2
  void (__fastcall *v86)(__int64, __int64, __int64); // x3
  __int64 v87; // x2
  void (__fastcall *v88)(__int64, __int64, __int64); // x3

  result = (unsigned int)(*(_DWORD *)a3 - 3);
  switch ( *(_DWORD *)a3 )
  {
    case 3:
      return sub_57A6E8(a1, a2, *(unsigned int **)(a3 + 8));
    case 0x19:
    case 0x1C:
      v13 = *(_QWORD *)(a1 + 256);
      for ( i = 0; i != 9; ++i )
      {
        v15 = aRestrict[i];
        if ( v13 == 255 )
        {
          v16 = *(_QWORD *)(a1 + 280);
          v17 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
          *(_BYTE *)(a1 + 255) = 0;
          v17(a1, 255, v16);
          v13 = 1;
          result = 0;
          ++*(_QWORD *)(a1 + 312);
        }
        else
        {
          result = v13++;
        }
        *(_QWORD *)(a1 + 256) = v13;
        *(_BYTE *)(a1 + result) = v15;
        *(_BYTE *)(a1 + 264) = v15;
      }
      return result;
    case 0x1A:
    case 0x1D:
      v18 = *(_QWORD *)(a1 + 256);
      for ( j = 0; j != 9; ++j )
      {
        v20 = aVolatile[j];
        if ( v18 == 255 )
        {
          v21 = *(_QWORD *)(a1 + 280);
          v22 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
          *(_BYTE *)(a1 + 255) = 0;
          v22(a1, 255, v21);
          v18 = 1;
          result = 0;
          ++*(_QWORD *)(a1 + 312);
        }
        else
        {
          result = v18++;
        }
        *(_QWORD *)(a1 + 256) = v18;
        *(_BYTE *)(a1 + result) = v20;
        *(_BYTE *)(a1 + 264) = v20;
      }
      return result;
    case 0x1B:
    case 0x1E:
      v23 = *(_QWORD *)(a1 + 256);
      if ( v23 == 255 )
      {
        v80 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
        v81 = *(_QWORD *)(a1 + 280);
        *(_BYTE *)(a1 + 255) = 0;
        v80(a1, 255, v81);
        v82 = *(_QWORD *)(a1 + 312);
        *(_BYTE *)a1 = 32;
        v25 = 2;
        *(_QWORD *)(a1 + 312) = v82 + 1;
        *(_BYTE *)(a1 + 1) = 99;
      }
      else
      {
        v24 = v23 + 1;
        *(_QWORD *)(a1 + 256) = v23 + 1;
        *(_BYTE *)(a1 + v23) = 32;
        *(_BYTE *)(a1 + 264) = 32;
        if ( v23 == 254 )
        {
          v59 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
          v60 = *(_QWORD *)(a1 + 280);
          *(_BYTE *)(a1 + 255) = 0;
          v59(a1, 255, v60);
          *(_BYTE *)a1 = 99;
          v26 = 2;
          ++*(_QWORD *)(a1 + 312);
          *(_BYTE *)(a1 + 1) = 111;
LABEL_25:
          v27 = v26 + 1;
          *(_QWORD *)(a1 + 256) = v26 + 1;
          *(_BYTE *)(a1 + v26) = 110;
          *(_BYTE *)(a1 + 264) = 110;
          if ( v26 == 254 )
          {
            v74 = *(void (__fastcall **)(__int64))(a1 + 272);
            v28 = 116;
            *(_BYTE *)(a1 + 255) = 0;
            v74(a1);
            *(_BYTE *)a1 = 115;
            result = 1;
            ++*(_QWORD *)(a1 + 312);
            goto LABEL_40;
          }
          goto LABEL_26;
        }
        v25 = v23 + 2;
        *(_QWORD *)(a1 + 256) = v24 + 1;
        *(_BYTE *)(a1 + v24) = 99;
        *(_BYTE *)(a1 + 264) = 99;
        if ( v24 == 254 )
        {
          v77 = *(void (__fastcall **)(__int64))(a1 + 272);
          *(_BYTE *)(a1 + 255) = 0;
          v77(a1);
          *(_BYTE *)a1 = 111;
          v27 = 2;
          ++*(_QWORD *)(a1 + 312);
          *(_BYTE *)(a1 + 1) = 110;
LABEL_26:
          result = v27 + 1;
          *(_QWORD *)(a1 + 256) = v27 + 1;
          *(_BYTE *)(a1 + v27) = 115;
          *(_BYTE *)(a1 + 264) = 115;
          v28 = 116;
          if ( v27 != 254 )
            goto LABEL_40;
          goto LABEL_27;
        }
      }
      v26 = v25 + 1;
      *(_QWORD *)(a1 + 256) = v25 + 1;
      *(_BYTE *)(a1 + v25) = 111;
      *(_BYTE *)(a1 + 264) = 111;
      if ( v25 == 254 )
      {
        v75 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
        v76 = *(_QWORD *)(a1 + 280);
        *(_BYTE *)(a1 + 255) = 0;
        v28 = 116;
        v75(a1, 255, v76);
        *(_BYTE *)a1 = 110;
        result = 2;
        ++*(_QWORD *)(a1 + 312);
        *(_BYTE *)(a1 + 1) = 115;
        goto LABEL_40;
      }
      goto LABEL_25;
    case 0x1F:
      v32 = *(_QWORD *)(a1 + 256);
      if ( v32 == 255 )
      {
        v83 = *(_QWORD *)(a1 + 280);
        v84 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
        *(_BYTE *)(a1 + 255) = 0;
        v84(a1, 255, v83);
        v33 = 1;
        v32 = 0;
        ++*(_QWORD *)(a1 + 312);
      }
      else
      {
        v33 = v32 + 1;
      }
      *(_QWORD *)(a1 + 256) = v33;
      *(_BYTE *)(a1 + v32) = 32;
      *(_BYTE *)(a1 + 264) = 32;
      goto LABEL_31;
    case 0x20:
      v35 = *(_QWORD *)(a1 + 256);
      if ( v35 == 255 )
      {
        v67 = *(_QWORD *)(a1 + 280);
        v68 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
        *(_BYTE *)(a1 + 255) = 0;
        v68(a1, 255, v67);
        v36 = 1;
        v35 = 0;
        ++*(_QWORD *)(a1 + 312);
      }
      else
      {
        v36 = v35 + 1;
      }
      *(_QWORD *)(a1 + 256) = v36;
      *(_BYTE *)(a1 + v35) = 32;
      *(_BYTE *)(a1 + 264) = 32;
      goto LABEL_38;
    case 0x21:
      v37 = *(_QWORD *)(a1 + 256);
      if ( v37 == 255 )
      {
        v78 = *(_QWORD *)(a1 + 280);
        v79 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
        *(_BYTE *)(a1 + 255) = 0;
        v79(a1, 255, v78);
        v38 = 1;
        v37 = 0;
        ++*(_QWORD *)(a1 + 312);
      }
      else
      {
        v38 = v37 + 1;
      }
      *(_QWORD *)(a1 + 256) = v38;
      *(_BYTE *)(a1 + v37) = 32;
      *(_BYTE *)(a1 + 264) = 32;
      return sub_57A6E8(a1, a2, *(unsigned int **)(a3 + 16));
    case 0x22:
      if ( (a2 & 4) == 0 )
      {
        v39 = *(_QWORD *)(a1 + 256);
        if ( v39 == 255 )
        {
          v87 = *(_QWORD *)(a1 + 280);
          v88 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
          *(_BYTE *)(a1 + 255) = 0;
          v88(a1, 255, v87);
          v40 = 1;
          v39 = 0;
          ++*(_QWORD *)(a1 + 312);
        }
        else
        {
          v40 = v39 + 1;
        }
        *(_QWORD *)(a1 + 256) = v40;
        result = 42;
        *(_BYTE *)(a1 + v39) = 42;
        *(_BYTE *)(a1 + 264) = 42;
      }
      return result;
    case 0x23:
      v33 = *(_QWORD *)(a1 + 256);
LABEL_31:
      if ( v33 == 255 )
      {
        v65 = *(_QWORD *)(a1 + 280);
        v66 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
        *(_BYTE *)(a1 + 255) = 0;
        v66(a1, 255, v65);
        v34 = 1;
        v33 = 0;
        ++*(_QWORD *)(a1 + 312);
      }
      else
      {
        v34 = v33 + 1;
      }
      *(_QWORD *)(a1 + 256) = v34;
      result = 38;
      *(_BYTE *)(a1 + v33) = 38;
      *(_BYTE *)(a1 + 264) = 38;
      return result;
    case 0x24:
      v36 = *(_QWORD *)(a1 + 256);
LABEL_38:
      if ( v36 == 255 )
      {
        v62 = *(_QWORD *)(a1 + 280);
        v63 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
        v28 = 38;
        *(_BYTE *)(a1 + 255) = 0;
        v63(a1, 255, v62);
        v64 = *(_QWORD *)(a1 + 312);
        result = 1;
        *(_BYTE *)a1 = 38;
        *(_QWORD *)(a1 + 312) = v64 + 1;
      }
      else
      {
        result = v36 + 1;
        *(_QWORD *)(a1 + 256) = v36 + 1;
        *(_BYTE *)(a1 + v36) = 38;
        *(_BYTE *)(a1 + 264) = 38;
        v28 = 38;
        if ( v36 == 254 )
        {
LABEL_27:
          v29 = *(_QWORD *)(a1 + 280);
          v30 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
          *(_BYTE *)(a1 + 255) = 0;
          v30(a1, result, v29);
          v31 = 1;
          result = 0;
          ++*(_QWORD *)(a1 + 312);
          goto LABEL_41;
        }
      }
LABEL_40:
      v31 = result + 1;
LABEL_41:
      *(_QWORD *)(a1 + 256) = v31;
      *(_BYTE *)(a1 + result) = v28;
      *(_BYTE *)(a1 + 264) = v28;
      return result;
    case 0x25:
      v41 = *(_QWORD *)(a1 + 256);
      v42 = "complex ";
      do
      {
        v43 = *v42;
        if ( v41 == 255 )
        {
          v44 = *(_QWORD *)(a1 + 280);
          v45 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
          *(_BYTE *)(a1 + 255) = 0;
          v45(a1, 255, v44);
          v41 = 1;
          result = 0;
          ++*(_QWORD *)(a1 + 312);
        }
        else
        {
          result = v41++;
        }
        *(_QWORD *)(a1 + 256) = v41;
        ++v42;
        *(_BYTE *)(a1 + result) = v43;
        *(_BYTE *)(a1 + 264) = v43;
      }
      while ( v42 != "" );
      return result;
    case 0x26:
      v46 = *(_QWORD *)(a1 + 256);
      v47 = "imaginary ";
      do
      {
        v48 = *v47;
        if ( v46 == 255 )
        {
          v49 = *(_QWORD *)(a1 + 280);
          v50 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
          *(_BYTE *)(a1 + 255) = 0;
          v50(a1, 255, v49);
          v46 = 1;
          result = 0;
          ++*(_QWORD *)(a1 + 312);
        }
        else
        {
          result = v46++;
        }
        *(_QWORD *)(a1 + 256) = v46;
        ++v47;
        *(_BYTE *)(a1 + result) = v48;
        *(_BYTE *)(a1 + 264) = v48;
      }
      while ( v47 != "" );
      return result;
    case 0x2B:
      if ( *(_BYTE *)(a1 + 264) != 40 )
      {
        v51 = *(_QWORD *)(a1 + 256);
        if ( v51 == 255 )
        {
          v85 = *(_QWORD *)(a1 + 280);
          v86 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
          *(_BYTE *)(a1 + 255) = 0;
          v86(a1, 255, v85);
          v52 = 1;
          v51 = 0;
          ++*(_QWORD *)(a1 + 312);
        }
        else
        {
          v52 = v51 + 1;
        }
        *(_QWORD *)(a1 + 256) = v52;
        *(_BYTE *)(a1 + v51) = 32;
        *(_BYTE *)(a1 + 264) = 32;
      }
      sub_57A6E8(a1, a2, *(unsigned int **)(a3 + 8));
      v53 = *(_QWORD *)(a1 + 256);
      if ( v53 == 255 )
      {
        v71 = *(_QWORD *)(a1 + 280);
        v72 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
        *(_BYTE *)(a1 + 255) = 0;
        v72(a1, 255, v71);
        v73 = *(_QWORD *)(a1 + 312);
        result = 2;
        *(_BYTE *)a1 = 58;
        *(_BYTE *)(a1 + 1) = 58;
        *(_QWORD *)(a1 + 312) = v73 + 1;
        goto LABEL_68;
      }
      *(_QWORD *)(a1 + 256) = v53 + 1;
      *(_BYTE *)(a1 + v53) = 58;
      *(_BYTE *)(a1 + 264) = 58;
      if ( v53 == 254 )
      {
        v61 = *(void (__fastcall **)(__int64))(a1 + 272);
        *(_BYTE *)(a1 + 255) = 0;
        v61(a1);
        *(_BYTE *)a1 = 58;
        result = 1;
        ++*(_QWORD *)(a1 + 312);
        goto LABEL_68;
      }
      result = v53 + 2;
      *(_QWORD *)(a1 + 256) = v53 + 2;
      *(_BYTE *)(a1 + v53 + 1) = 58;
      *(_BYTE *)(a1 + 264) = 58;
      if ( v53 != 253 )
      {
LABEL_68:
        v54 = result + 1;
        goto LABEL_69;
      }
      v57 = *(_QWORD *)(a1 + 280);
      v58 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
      *(_BYTE *)(a1 + 255) = 0;
      v58(a1, 255, v57);
      v54 = 1;
      result = 0;
      ++*(_QWORD *)(a1 + 312);
LABEL_69:
      *(_QWORD *)(a1 + 256) = v54;
      *(_BYTE *)(a1 + result) = 42;
      *(_BYTE *)(a1 + 264) = 42;
      return result;
    case 0x2D:
      v7 = *(_QWORD *)(a1 + 256);
      v8 = " __vector(";
      do
      {
        v10 = *v8;
        if ( v7 == 255 )
        {
          v11 = *(_QWORD *)(a1 + 280);
          v12 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
          *(_BYTE *)(a1 + 255) = 0;
          v12(a1, 255, v11);
          v7 = 1;
          v9 = 0;
          ++*(_QWORD *)(a1 + 312);
        }
        else
        {
          v9 = v7++;
        }
        *(_QWORD *)(a1 + 256) = v7;
        ++v8;
        *(_BYTE *)(a1 + v9) = v10;
        *(_BYTE *)(a1 + 264) = v10;
      }
      while ( v8 != "" );
      sub_57A6E8(a1, a2, *(unsigned int **)(a3 + 8));
      v55 = *(_QWORD *)(a1 + 256);
      if ( v55 == 255 )
      {
        v69 = *(_QWORD *)(a1 + 280);
        v70 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
        *(_BYTE *)(a1 + 255) = 0;
        v70(a1, 255, v69);
        v56 = 1;
        v55 = 0;
        ++*(_QWORD *)(a1 + 312);
      }
      else
      {
        v56 = v55 + 1;
      }
      *(_QWORD *)(a1 + 256) = v56;
      result = 41;
      *(_BYTE *)(a1 + v55) = 41;
      *(_BYTE *)(a1 + 264) = 41;
      return result;
    default:
      return sub_57A6E8(a1, a2, (unsigned int *)a3);
  }
}

