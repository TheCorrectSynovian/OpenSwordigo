/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F5064
 * Mangled: sub_4F5064
 * Demangled: sub_4F5064
 *
 * Callers: 2
 *   0x00000000004F4F30  sub_4F4F30
 *   0x00000000004F5064  sub_4F5064
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EAB00  sub_4EAB00
 *   0x00000000004EB814  sub_4EB814
 *   0x00000000004EBBB8  sub_4EBBB8
 *   0x00000000004ED6C8  sub_4ED6C8
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004F356C  sub_4F356C
 *   0x00000000004F8758  sub_4F8758
 *   0x00000000004F8824  sub_4F8824
 *
 * Referenced strings: 471
 *   insn=0x00000000004F5080 string=0x00000000004F5084 "H"
 *   insn=0x00000000004F5088 string=0x00000000004F508C ""
 *   insn=0x00000000004F5098 string=0x00000000004F509C "`"
 *   insn=0x00000000004F509C string=0x00000000004F50A0 ""
 *   insn=0x00000000004F50A0 string=0x00000000004F50A4 ""
 *   insn=0x00000000004F50A4 string=0x00000000004F50A8 "\t="
 *   insn=0x00000000004F50A8 string=0x00000000004F50AC "?%"
 *   insn=0x00000000004F50AC string=0x00000000004F50B0 ""
 *   insn=0x00000000004F50B0 string=0x00000000004F50B4 "c"
 *   insn=0x00000000004F50B4 string=0x00000000004F50B8 "b"
 *   insn=0x00000000004F50B4 string=0x00000000004F50E0 "z"
 *   insn=0x00000000004F50B8 string=0x00000000004F50BC "!"
 *   insn=0x00000000004F50BC string=0x00000000004F50C0 "#"
 *   insn=0x00000000004F50BC string=0x000000000059A3AF "%s: %s in precompiled chunk"
 *   insn=0x00000000004F50C0 string=0x00000000004F50C4 "!"
 *   insn=0x00000000004F50C0 string=0x000000000059A3CB "code too deep"
 *   insn=0x00000000004F50C4 string=0x00000000004F50C8 "c,"
 *   insn=0x00000000004F50CC string=0x00000000004F50D0 "`"
 *   insn=0x00000000004F50E0 string=0x00000000004F50E4 "h"
 *   insn=0x00000000004F50E8 string=0x00000000004F50EC ")"
 *   insn=0x00000000004F50EC string=0x00000000004F50F0 "\t@"
 *   insn=0x00000000004F50F4 string=0x00000000004F50F8 "\t\t"
 *   insn=0x00000000004F50F8 string=0x00000000004F50FC "`"
 *   insn=0x00000000004F5100 string=0x00000000004F5104 "\n"
 *   insn=0x00000000004F5104 string=0x00000000004F5108 "\tA"
 *   insn=0x00000000004F5108 string=0x00000000004F510C "J"
 *   insn=0x00000000004F510C string=0x00000000004F5110 "_A"
 *   insn=0x00000000004F5114 string=0x00000000004F5128 ")A"
 *   insn=0x00000000004F511C string=0x00000000004F5120 "h"
 *   insn=0x00000000004F511C string=0x00000000004EBBB8 "X@"
 *   insn=0x00000000004F5120 string=0x00000000004F5124 "\tA"
 *   insn=0x00000000004F5128 string=0x00000000004F512C "\t"
 *   insn=0x00000000004F5130 string=0x00000000004F5134 "`"
 *   insn=0x00000000004F5140 string=0x00000000004F5144 "`"
 *   insn=0x00000000004F5144 string=0x00000000004F5148 "`"
 *   insn=0x00000000004F5148 string=0x00000000004F514C "b"
 *   insn=0x00000000004F514C string=0x00000000004F5150 "!"
 *   insn=0x00000000004F5150 string=0x00000000004F5154 "#"
 *   insn=0x00000000004F5154 string=0x00000000004F5158 "!"
 *   insn=0x00000000004F5154 string=0x000000000059A3A0 "unexpected end"
 *   insn=0x00000000004F5158 string=0x00000000004F515C "c"
 *   insn=0x00000000004F5160 string=0x00000000004F5164 "`"
 *   insn=0x00000000004F5170 string=0x00000000004F5174 "b"
 *   insn=0x00000000004F5174 string=0x00000000004F5178 "`"
 *   insn=0x00000000004F5178 string=0x00000000004F517C "a\n@"
 *   insn=0x00000000004F5180 string=0x00000000004F5184 "h"
 *   insn=0x00000000004F5194 string=0x00000000004F5198 "p"
 *   insn=0x00000000004F5198 string=0x00000000004F519C "`"
 *   insn=0x00000000004F519C string=0x00000000004F51A0 "`"
 *   insn=0x00000000004F51A0 string=0x00000000004F51A4 "b"
 *   insn=0x00000000004F51A4 string=0x00000000004F51A8 "!"
 *   insn=0x00000000004F51A8 string=0x00000000004F51AC "#"
 *   insn=0x00000000004F51AC string=0x00000000004F51B0 "!"
 *   insn=0x00000000004F51B0 string=0x00000000004F51B4 "c"
 *   insn=0x00000000004F51B8 string=0x00000000004F51BC "`"
 *   insn=0x00000000004F51C8 string=0x00000000004F51CC "`"
 *   insn=0x00000000004F51EC string=0x00000000004F51F0 "`"
 *   insn=0x00000000004F51F8 string=0x00000000004F51FC "W"
 *   insn=0x00000000004F51FC string=0x00000000004F5200 "`"
 *   insn=0x00000000004F5200 string=0x00000000004F5204 "`"
 *   insn=0x00000000004F5204 string=0x00000000004F5208 "b"
 *   insn=0x00000000004F5208 string=0x00000000004F520C "!"
 *   insn=0x00000000004F520C string=0x00000000004F5210 "#"
 *   insn=0x00000000004F5210 string=0x00000000004F5214 "!"
 *   insn=0x00000000004F5214 string=0x00000000004F5218 "c"
 *   insn=0x00000000004F5218 string=0x00000000004F521C "n"
 *   insn=0x00000000004F521C string=0x00000000004F5220 "`"
 *   insn=0x00000000004F5224 string=0x00000000004F5228 "{"
 *   insn=0x00000000004F5230 string=0x00000000004F5234 "`"
 *   insn=0x00000000004F5234 string=0x00000000004F5238 "b"
 *   insn=0x00000000004F5238 string=0x00000000004F523C "!"
 *   insn=0x00000000004F523C string=0x00000000004F5240 "#"
 *   insn=0x00000000004F5240 string=0x00000000004F5244 "!"
 *   insn=0x00000000004F5240 string=0x000000000059A3E2 "bad integer"
 *   insn=0x00000000004F5244 string=0x00000000004F5248 "c"
 *   insn=0x00000000004F5248 string=0x00000000004F524C "b"
 *   insn=0x00000000004F524C string=0x00000000004F5250 "`"
 *   insn=0x00000000004F5254 string=0x00000000004F5258 "o"
 *   insn=0x00000000004F5260 string=0x00000000004F5264 "`"
 *   insn=0x00000000004F526C string=0x00000000004F5270 ":"
 *   insn=0x00000000004F5270 string=0x00000000004F5274 "`"
 *   insn=0x00000000004F5274 string=0x00000000004F5278 "`"
 *   insn=0x00000000004F5278 string=0x00000000004F527C "b"
 *   insn=0x00000000004F527C string=0x00000000004F5280 "!"
 *   insn=0x00000000004F5280 string=0x00000000004F5284 "#"
 *   insn=0x00000000004F5284 string=0x00000000004F5288 "!"
 *   insn=0x00000000004F5288 string=0x00000000004F528C "c"
 *   insn=0x00000000004F528C string=0x00000000004F5290 "Q"
 *   insn=0x00000000004F5290 string=0x00000000004F5294 "`"
 *   insn=0x00000000004F5298 string=0x00000000004F529C "^"
 *   insn=0x00000000004F52A4 string=0x00000000004F52A8 "`"
 *   insn=0x00000000004F52A8 string=0x00000000004F52AC "b"
 *   insn=0x00000000004F52AC string=0x00000000004F52B0 "!"
 *   insn=0x00000000004F52B0 string=0x00000000004F52B4 "#"
 *   insn=0x00000000004F52B4 string=0x00000000004F52B8 "!"
 *   insn=0x00000000004F52B8 string=0x00000000004F52BC "c"
 *   insn=0x00000000004F52BC string=0x00000000004F52C0 "E"
 *   insn=0x00000000004F52C0 string=0x00000000004F52C4 "`"
 *   insn=0x00000000004F52C8 string=0x00000000004F52CC "R"
 *   insn=0x00000000004F52D4 string=0x00000000004F52D8 "`"
 *   insn=0x00000000004F52E4 string=0x00000000004F52E8 "`"
 *   insn=0x00000000004F52E8 string=0x00000000004F52EC "`"
 *   insn=0x00000000004F52EC string=0x00000000004F52F0 "b"
 *   insn=0x00000000004F52F0 string=0x00000000004F52F4 "!"
 *   insn=0x00000000004F52F4 string=0x00000000004F52F8 "#"
 *   insn=0x00000000004F52F8 string=0x00000000004F52FC "!"
 *   insn=0x00000000004F52FC string=0x00000000004F5300 "c"
 *   insn=0x00000000004F5300 string=0x00000000004F5304 "4"
 *   insn=0x00000000004F5304 string=0x00000000004F5308 "`"
 *   insn=0x00000000004F530C string=0x00000000004F5310 "A"
 *   insn=0x00000000004F5320 string=0x00000000004F5324 "`"
 *   insn=0x00000000004F5328 string=0x00000000004F532C "`"
 *   insn=0x00000000004F532C string=0x00000000004F5330 "`"
 *   insn=0x00000000004F5330 string=0x00000000004F5334 "b"
 *   insn=0x00000000004F5334 string=0x00000000004F5338 "!"
 *   insn=0x00000000004F5338 string=0x00000000004F533C "#"
 *   insn=0x00000000004F533C string=0x00000000004F5340 "!"
 *   insn=0x00000000004F5340 string=0x00000000004F5344 "c"
 *   insn=0x00000000004F5344 string=0x00000000004F5348 "#"
 *   insn=0x00000000004F5348 string=0x00000000004F534C "`"
 *   insn=0x00000000004F5350 string=0x00000000004F5354 "0"
 *   insn=0x00000000004F5364 string=0x00000000004F5368 "`"
 *   insn=0x00000000004F536C string=0x00000000004F5370 "`"
 *   insn=0x00000000004F5370 string=0x00000000004F5374 "`"
 *   insn=0x00000000004F5374 string=0x00000000004F5378 "b"
 *   insn=0x00000000004F5378 string=0x00000000004F537C "!"
 *   insn=0x00000000004F537C string=0x00000000004F5380 "#"
 *   insn=0x00000000004F5380 string=0x00000000004F5384 "!"
 *   insn=0x00000000004F5384 string=0x00000000004F5388 "c"
 *   insn=0x00000000004F538C string=0x00000000004F5390 "`"
 *   insn=0x00000000004F53A8 string=0x00000000004F53AC "`"
 *   insn=0x00000000004F53B0 string=0x00000000004F53B4 "`"
 *   insn=0x00000000004F53B4 string=0x00000000004F53B8 "`"
 *   insn=0x00000000004F53B8 string=0x00000000004F53BC "b"
 *   insn=0x00000000004F53BC string=0x00000000004F53C0 "!"
 *   insn=0x00000000004F53C0 string=0x00000000004F53C4 "#"
 *   insn=0x00000000004F53C4 string=0x00000000004F53C8 "!"
 *   insn=0x00000000004F53C8 string=0x00000000004F53CC "c"
 *   insn=0x00000000004F53D0 string=0x00000000004F53D4 "`"
 *   insn=0x00000000004F53EC string=0x00000000004F53F0 "`"
 *   insn=0x00000000004F53F4 string=0x00000000004F53F8 "`"
 *   insn=0x00000000004F53F8 string=0x00000000004F53FC "`"
 *   insn=0x00000000004F53FC string=0x00000000004F5400 "b"
 *   insn=0x00000000004F5400 string=0x00000000004F5404 "!"
 *   insn=0x00000000004F5404 string=0x00000000004F5408 "#"
 *   insn=0x00000000004F5408 string=0x00000000004F540C "!"
 *   insn=0x00000000004F540C string=0x00000000004F5410 "c"
 *   insn=0x00000000004F5414 string=0x00000000004F5418 "`"
 *   insn=0x00000000004F5424 string=0x00000000004F5428 "v"
 *   insn=0x00000000004F5428 string=0x00000000004F542C "`"
 *   insn=0x00000000004F5428 string=0x00000000004F5434 "`"
 *   insn=0x00000000004F5434 string=0x00000000004F5438 "b"
 *   insn=0x00000000004F5438 string=0x00000000004F543C "!"
 *   insn=0x00000000004F543C string=0x00000000004F5440 "#"
 *   insn=0x00000000004F5440 string=0x00000000004F5444 "!"
 *   insn=0x00000000004F5444 string=0x00000000004F5448 "c"
 *   insn=0x00000000004F544C string=0x00000000004F5450 "`"
 *   insn=0x00000000004F545C string=0x00000000004F5460 "`"
 *   insn=0x00000000004F5478 string=0x00000000004F547C ">"
 *   insn=0x00000000004F5488 string=0x00000000004F548C "`"
 *   insn=0x00000000004F5498 string=0x00000000004F549C "`"
 *   insn=0x00000000004F549C string=0x00000000004F54A0 "`"
 *   insn=0x00000000004F549C string=0x00000000004F54C8 "`"
 *   insn=0x00000000004F54A0 string=0x00000000004F54A4 "b"
 *   insn=0x00000000004F54A4 string=0x00000000004F54A8 "!"
 *   insn=0x00000000004F54A8 string=0x00000000004F54AC "#"
 *   insn=0x00000000004F54AC string=0x00000000004F54B0 "!"
 *   insn=0x00000000004F54B0 string=0x00000000004F54B4 "c"
 *   insn=0x00000000004F54B8 string=0x00000000004F54BC "`"
 *   insn=0x00000000004F54D4 string=0x00000000004F54D8 "`"
 *   insn=0x00000000004F54D8 string=0x00000000004F54DC "`"
 *   insn=0x00000000004F54DC string=0x00000000004F54E0 "b"
 *   insn=0x00000000004F54E0 string=0x00000000004F54E4 "!"
 *   insn=0x00000000004F54E4 string=0x00000000004F54E8 "#"
 *   insn=0x00000000004F54E8 string=0x00000000004F54EC "!"
 *   insn=0x00000000004F54EC string=0x00000000004F54F0 "c"
 *   insn=0x00000000004F54F4 string=0x00000000004F54F8 "`"
 *   insn=0x00000000004F5504 string=0x00000000004F5508 "v"
 *   insn=0x00000000004F5508 string=0x00000000004F550C "`"
 *   insn=0x00000000004F5508 string=0x00000000004F5514 "`"
 *   insn=0x00000000004F5514 string=0x00000000004F5518 "b"
 *   insn=0x00000000004F5518 string=0x00000000004F551C "!"
 *   insn=0x00000000004F551C string=0x00000000004F5520 "#"
 *   insn=0x00000000004F5520 string=0x00000000004F5524 "!"
 *   insn=0x00000000004F5524 string=0x00000000004F5528 "c"
 *   insn=0x00000000004F552C string=0x00000000004F5530 "`"
 *   insn=0x00000000004F553C string=0x00000000004F5540 "`"
 *   insn=0x00000000004F5544 string=0x00000000004F5548 "m"
 *   insn=0x00000000004F5548 string=0x00000000004F57F4 "{"
 *   insn=0x00000000004F5554 string=0x00000000004F5558 ""
 *   insn=0x00000000004F556C string=0x00000000004F5800 "`"
 *   insn=0x00000000004F5574 string=0x00000000004F5578 "a"
 *   insn=0x00000000004F5578 string=0x00000000004F5584 "\ty"
 *   insn=0x00000000004F557C string=0x00000000004F5580 "\n"
 *   insn=0x00000000004F558C string=0x00000000004F5590 "_"
 *   insn=0x00000000004F5590 string=0x00000000004F5594 "_"
 *   insn=0x00000000004F5594 string=0x00000000004F5598 "k\t"
 *   insn=0x00000000004F559C string=0x00000000004F55A0 "?"
 *   insn=0x00000000004F55A8 string=0x00000000004F55AC "J!"
 *   insn=0x00000000004F55AC string=0x00000000004F55B0 "\t"
 *   insn=0x00000000004F55B0 string=0x00000000004F55B4 ")"
 *   insn=0x00000000004F55B4 string=0x00000000004F55B8 "_"
 *   insn=0x00000000004F55C4 string=0x00000000004F55C8 "6"
 *   insn=0x00000000004F55C8 string=0x00000000004F55CC "7"
 *   insn=0x00000000004F55CC string=0x00000000004F55D0 "8"
 *   insn=0x00000000004F55E8 string=0x00000000004F55F8 "`"
 *   insn=0x00000000004F55F0 string=0x00000000004F55F4 "Z"
 *   insn=0x00000000004F5600 string=0x00000000004F5604 "U"
 *   insn=0x00000000004F5604 string=0x00000000004F5608 " "
 *   insn=0x00000000004F5608 string=0x00000000004F560C "`"
 *   insn=0x00000000004F560C string=0x00000000004F5610 "b"
 *   insn=0x00000000004F5618 string=0x00000000004F561C "n"
 *   insn=0x00000000004F561C string=0x00000000004F5620 "`"
 *   insn=0x00000000004F5624 string=0x00000000004F5628 "{"
 *   insn=0x00000000004F5630 string=0x00000000004F5634 "("
 *   insn=0x00000000004F5634 string=0x00000000004F5798 "`"
 *   insn=0x00000000004F5638 string=0x00000000004F563C ""
 *   insn=0x00000000004F5640 string=0x00000000004F5654 "`"
 *   insn=0x00000000004F5640 string=0x00000000004F56A4 "`"
 *   insn=0x00000000004F5640 string=0x00000000004F56FC "`"
 *   insn=0x00000000004F564C string=0x00000000004F5650 "l"
 *   insn=0x00000000004F565C string=0x00000000004F5660 ">"
 *   insn=0x00000000004F5660 string=0x00000000004F5664 " "
 *   insn=0x00000000004F5664 string=0x00000000004F5668 "`"
 *   insn=0x00000000004F5668 string=0x00000000004F566C "b"
 *   insn=0x00000000004F5674 string=0x00000000004F5678 "W"
 *   insn=0x00000000004F5678 string=0x00000000004F567C "`"
 *   insn=0x00000000004F5680 string=0x00000000004F5684 "d"
 *   insn=0x00000000004F568C string=0x00000000004F5690 "("
 *   insn=0x00000000004F5694 string=0x00000000004F5698 "(\t"
 *   insn=0x00000000004F569C string=0x00000000004F56A0 "X"
 *   insn=0x00000000004F56AC string=0x00000000004F56B0 "*"
 *   insn=0x00000000004F56B0 string=0x00000000004F56B4 " "
 *   insn=0x00000000004F56B4 string=0x00000000004F56B8 "`"
 *   insn=0x00000000004F56B8 string=0x00000000004F56BC "b"
 *   insn=0x00000000004F56C4 string=0x00000000004F56C8 "C"
 *   insn=0x00000000004F56C8 string=0x00000000004F56CC "`"
 *   insn=0x00000000004F56D0 string=0x00000000004F56D4 "P"
 *   insn=0x00000000004F56E4 string=0x00000000004F56E8 "("
 *   insn=0x00000000004F56EC string=0x00000000004F56F0 "(\t"
 *   insn=0x00000000004F56F4 string=0x00000000004F56F8 "B"
 *   insn=0x00000000004F5708 string=0x00000000004F570C " "
 *   insn=0x00000000004F570C string=0x00000000004F5710 "`"
 *   insn=0x00000000004F5710 string=0x00000000004F5714 "b"
 *   insn=0x00000000004F571C string=0x00000000004F5720 "-"
 *   insn=0x00000000004F5720 string=0x00000000004F5724 "`"
 *   insn=0x00000000004F5728 string=0x00000000004F572C ":"
 *   insn=0x00000000004F5734 string=0x00000000004F5738 "`"
 *   insn=0x00000000004F5738 string=0x00000000004F573C "a\n@"
 *   insn=0x00000000004F573C string=0x00000000004F5740 "9"
 *   insn=0x00000000004F5740 string=0x00000000004F5744 "h"
 *   insn=0x00000000004F5758 string=0x00000000004F575C " "
 *   insn=0x00000000004F575C string=0x00000000004F5760 "`"
 *   insn=0x00000000004F5760 string=0x00000000004F5764 "b"
 *   insn=0x00000000004F5770 string=0x00000000004F5774 "`"
 *   insn=0x00000000004F5778 string=0x00000000004F577C "&"
 *   insn=0x00000000004F5780 string=0x00000000004F5784 "`"
 *   insn=0x00000000004F578C string=0x00000000004F5790 "w"
 *   insn=0x00000000004F5790 string=0x00000000004F5794 ""
 *   insn=0x00000000004F5798 string=0x00000000004F579C "b"
 *   insn=0x00000000004F579C string=0x00000000004F57A0 "#"
 *   insn=0x00000000004F57A0 string=0x000000000059A3EE "bad constant"
 *   insn=0x00000000004F57A4 string=0x00000000004F57A8 "c"
 *   insn=0x00000000004F57A8 string=0x00000000004F57AC "\n"
 *   insn=0x00000000004F57AC string=0x00000000004F57B0 "`"
 *   insn=0x00000000004F57D0 string=0x00000000004F57D4 "\t\t"
 *   insn=0x00000000004F57D8 string=0x00000000004F57DC "\t"
 *   insn=0x00000000004F57EC string=0x00000000004F57F0 "%"
 *   insn=0x00000000004F580C string=0x00000000004F5810 "`"
 *   insn=0x00000000004F5810 string=0x00000000004F5814 "`"
 *   insn=0x00000000004F5814 string=0x00000000004F5818 "b"
 *   insn=0x00000000004F5818 string=0x00000000004F581C "!"
 *   insn=0x00000000004F581C string=0x00000000004F5820 "#"
 *   insn=0x00000000004F5820 string=0x00000000004F5824 "!"
 *   insn=0x00000000004F5824 string=0x00000000004F5828 "c"
 *   insn=0x00000000004F582C string=0x00000000004F5830 "`"
 *   insn=0x00000000004F583C string=0x00000000004F5840 "u"
 *   insn=0x00000000004F5840 string=0x00000000004F5844 "`"
 *   insn=0x00000000004F5840 string=0x00000000004F584C "`"
 *   insn=0x00000000004F584C string=0x00000000004F5850 "b"
 *   insn=0x00000000004F5850 string=0x00000000004F5854 "!"
 *   insn=0x00000000004F5854 string=0x00000000004F5858 "#"
 *   insn=0x00000000004F5858 string=0x00000000004F585C "!"
 *   insn=0x00000000004F585C string=0x00000000004F5860 "c"
 *   insn=0x00000000004F5864 string=0x00000000004F5868 "`"
 *   insn=0x00000000004F5874 string=0x00000000004F5878 "`"
 *   insn=0x00000000004F5880 string=0x00000000004F58FC "9"
 *   insn=0x00000000004F588C string=0x00000000004F5890 "9"
 *   insn=0x00000000004F589C string=0x00000000004F58A0 "K"
 *   insn=0x00000000004F58A0 string=0x00000000004F5908 "`"
 *   insn=0x00000000004F58B8 string=0x00000000004F58BC "?y("
 *   insn=0x00000000004F58BC string=0x00000000004F58C0 ""
 *   insn=0x00000000004F58F0 string=0x00000000004F58F4 "!"
 *   insn=0x00000000004F5914 string=0x00000000004F5918 "`"
 *   insn=0x00000000004F5918 string=0x00000000004F591C "`"
 *   insn=0x00000000004F591C string=0x00000000004F5920 "b"
 *   insn=0x00000000004F5920 string=0x00000000004F5924 "!"
 *   insn=0x00000000004F5924 string=0x00000000004F5928 "#"
 *   insn=0x00000000004F5928 string=0x00000000004F592C "!"
 *   insn=0x00000000004F592C string=0x00000000004F5930 "c"
 *   insn=0x00000000004F5934 string=0x00000000004F5938 "`"
 *   insn=0x00000000004F5944 string=0x00000000004F5948 "v"
 *   insn=0x00000000004F5948 string=0x00000000004F594C "`"
 *   insn=0x00000000004F5948 string=0x00000000004F5954 "`"
 *   insn=0x00000000004F5954 string=0x00000000004F5958 "b"
 *   insn=0x00000000004F5958 string=0x00000000004F595C "!"
 *   insn=0x00000000004F595C string=0x00000000004F5960 "#"
 *   insn=0x00000000004F5960 string=0x00000000004F5964 "!"
 *   insn=0x00000000004F5964 string=0x00000000004F5968 "c"
 *   insn=0x00000000004F596C string=0x00000000004F5970 "`"
 *   insn=0x00000000004F597C string=0x00000000004F5980 "`"
 *   insn=0x00000000004F59A8 string=0x00000000004F59AC "`"
 *   insn=0x00000000004F59B4 string=0x00000000004F59B8 "h"
 *   insn=0x00000000004F59B8 string=0x00000000004F59BC "`"
 *   insn=0x00000000004F59BC string=0x00000000004F59C0 "`"
 *   insn=0x00000000004F59BC string=0x00000000004F59E8 "`"
 *   insn=0x00000000004F59C0 string=0x00000000004F59C4 "b"
 *   insn=0x00000000004F59C4 string=0x00000000004F59C8 "!"
 *   insn=0x00000000004F59C8 string=0x00000000004F59CC "#"
 *   insn=0x00000000004F59CC string=0x00000000004F59D0 "!"
 *   insn=0x00000000004F59D0 string=0x00000000004F59D4 "c"
 *   insn=0x00000000004F59D8 string=0x00000000004F59DC "`"
 *   insn=0x00000000004F59F0 string=0x00000000004F59F4 "Y"
 *   insn=0x00000000004F59F4 string=0x00000000004F59F8 "`"
 *   insn=0x00000000004F59F8 string=0x00000000004F59FC "`"
 *   insn=0x00000000004F59FC string=0x00000000004F5A00 "b"
 *   insn=0x00000000004F5A00 string=0x00000000004F5A04 "!"
 *   insn=0x00000000004F5A04 string=0x00000000004F5A08 "#"
 *   insn=0x00000000004F5A08 string=0x00000000004F5A0C "!"
 *   insn=0x00000000004F5A0C string=0x00000000004F5A10 "c"
 *   insn=0x00000000004F5A10 string=0x00000000004F5A14 "p"
 *   insn=0x00000000004F5A14 string=0x00000000004F5A18 "`"
 *   insn=0x00000000004F5A1C string=0x00000000004F5A20 "}"
 *   insn=0x00000000004F5A24 string=0x00000000004F5A28 "u"
 *   insn=0x00000000004F5A28 string=0x00000000004F5A2C "`"
 *   insn=0x00000000004F5A28 string=0x00000000004F5A34 "`"
 *   insn=0x00000000004F5A34 string=0x00000000004F5A38 "b"
 *   insn=0x00000000004F5A38 string=0x00000000004F5A3C "!"
 *   insn=0x00000000004F5A3C string=0x00000000004F5A40 "#"
 *   insn=0x00000000004F5A40 string=0x00000000004F5A44 "!"
 *   insn=0x00000000004F5A44 string=0x00000000004F5A48 "c"
 *   insn=0x00000000004F5A48 string=0x00000000004F5A4C "b"
 *   insn=0x00000000004F5A4C string=0x00000000004F5A50 "`"
 *   insn=0x00000000004F5A54 string=0x00000000004F5A58 "o"
 *   insn=0x00000000004F5A5C string=0x00000000004F5A60 "`"
 *   insn=0x00000000004F5A68 string=0x00000000004F5C98 "R"
 *   insn=0x00000000004F5A88 string=0x00000000004F5CA4 "`"
 *   insn=0x00000000004F5A90 string=0x00000000004F5A94 "a"
 *   insn=0x00000000004F5A94 string=0x00000000004F5AA0 "({"
 *   insn=0x00000000004F5A98 string=0x00000000004F5A9C "\n"
 *   insn=0x00000000004F5A9C string=0x00000000004F5AC4 ")"
 *   insn=0x00000000004F5AA0 string=0x00000000004F5AA4 "\t@"
 *   insn=0x00000000004F5AA8 string=0x00000000004F5AAC "?"
 *   insn=0x00000000004F5AAC string=0x00000000004F5AB0 "?"
 *   insn=0x00000000004F5AB0 string=0x00000000004F5AB4 "J\t"
 *   insn=0x00000000004F5AC0 string=0x00000000004F5AD8 "5"
 *   insn=0x00000000004F5AC4 string=0x00000000004F5AC8 ""
 *   insn=0x00000000004F5AC8 string=0x00000000004F5ACC ")"
 *   insn=0x00000000004F5AD8 string=0x00000000004F5ADC "6"
 *   insn=0x00000000004F5ADC string=0x00000000004F5AE0 "7"
 *   insn=0x00000000004F5AF0 string=0x00000000004F5AF4 "`"
 *   insn=0x00000000004F5B00 string=0x00000000004F5B04 " "
 *   insn=0x00000000004F5B04 string=0x00000000004F5B08 "`"
 *   insn=0x00000000004F5B08 string=0x00000000004F5B0C "b"
 *   insn=0x00000000004F5B14 string=0x00000000004F5B18 "/"
 *   insn=0x00000000004F5B18 string=0x00000000004F5B1C "`"
 *   insn=0x00000000004F5B20 string=0x00000000004F5B24 "<"
 *   insn=0x00000000004F5B28 string=0x00000000004F5B2C """
 *   insn=0x00000000004F5B2C string=0x00000000004F5B30 "`"
 *   insn=0x00000000004F5B30 string=0x00000000004F5B34 "a\n@"
 *   insn=0x00000000004F5B34 string=0x00000000004F5B38 ";"
 *   insn=0x00000000004F5B38 string=0x00000000004F5B3C "h"
 *   insn=0x00000000004F5B50 string=0x00000000004F5B54 " "
 *   insn=0x00000000004F5B54 string=0x00000000004F5B58 "`"
 *   insn=0x00000000004F5B58 string=0x00000000004F5B5C "b"
 *   insn=0x00000000004F5B64 string=0x00000000004F5B68 ""
 *   insn=0x00000000004F5B68 string=0x00000000004F5B6C "`"
 *   insn=0x00000000004F5B70 string=0x00000000004F5B74 "("
 *   insn=0x00000000004F5B78 string=0x00000000004F5B7C "`"
 *   insn=0x00000000004F5B84 string=0x00000000004F5B88 "y"
 *   insn=0x00000000004F5BA0 string=0x00000000004F5BA4 "`"
 *   insn=0x00000000004F5BA8 string=0x00000000004F5BAC " "
 *   insn=0x00000000004F5BAC string=0x00000000004F5BB0 "`"
 *   insn=0x00000000004F5BB0 string=0x00000000004F5BB4 "b"
 *   insn=0x00000000004F5BC0 string=0x00000000004F5BC4 "`"
 *   insn=0x00000000004F5BD0 string=0x00000000004F5BD4 "H"
 *   insn=0x00000000004F5BD4 string=0x00000000004F5BD8 "`"
 *   insn=0x00000000004F5BD8 string=0x00000000004F5BDC "b"
 *   insn=0x00000000004F5BE8 string=0x00000000004F5BEC "`"
 *   insn=0x00000000004F5BF0 string=0x00000000004F5BF4 ""
 *   insn=0x00000000004F5C04 string=0x00000000004F5C08 ")"
 *   insn=0x00000000004F5C08 string=0x00000000004F5C0C "(\t"
 *   insn=0x00000000004F5C0C string=0x00000000004F5C10 "`"
 *   insn=0x00000000004F5C14 string=0x00000000004F5C18 " "
 *   insn=0x00000000004F5C18 string=0x00000000004F5C1C "`"
 *   insn=0x00000000004F5C1C string=0x00000000004F5C20 "b"
 *   insn=0x00000000004F5C2C string=0x00000000004F5C30 "`"
 *   insn=0x00000000004F5C3C string=0x00000000004F5C40 "H"
 *   insn=0x00000000004F5C40 string=0x00000000004F5C44 "`"
 *   insn=0x00000000004F5C44 string=0x00000000004F5C48 "b"
 *   insn=0x00000000004F5C54 string=0x00000000004F5C58 "`"
 *   insn=0x00000000004F5C68 string=0x00000000004F5C6C "9"
 *   insn=0x00000000004F5C6C string=0x00000000004F5C70 ")"
 *   insn=0x00000000004F5C70 string=0x00000000004F5C74 "ZC"
 *   insn=0x00000000004F5C74 string=0x00000000004F5C78 "("
 *   insn=0x00000000004F5C7C string=0x00000000004F5C80 "\t"
 *   insn=0x00000000004F5C84 string=0x00000000004F5C88 "V"
 *   insn=0x00000000004F5C90 string=0x00000000004F5C94 "D"
 *   insn=0x00000000004F5CB0 string=0x00000000004F5CB4 "`"
 *   insn=0x00000000004F5CB4 string=0x00000000004F5CB8 "`"
 *   insn=0x00000000004F5CB8 string=0x00000000004F5CBC "b"
 *   insn=0x00000000004F5CBC string=0x00000000004F5CC0 "!"
 *   insn=0x00000000004F5CC0 string=0x00000000004F5CC4 "#"
 *   insn=0x00000000004F5CC4 string=0x00000000004F5CC8 "!"
 *   insn=0x00000000004F5CC8 string=0x00000000004F5CCC "c"
 *   insn=0x00000000004F5CD0 string=0x00000000004F5CD4 "`"
 *   insn=0x00000000004F5CE0 string=0x00000000004F5CE4 "u"
 *   insn=0x00000000004F5CE4 string=0x00000000004F5CE8 "`"
 *   insn=0x00000000004F5CE4 string=0x00000000004F5CF0 "`"
 *   insn=0x00000000004F5CF0 string=0x00000000004F5CF4 "b"
 *   insn=0x00000000004F5CF4 string=0x00000000004F5CF8 "!"
 *   insn=0x00000000004F5CF8 string=0x00000000004F5CFC "#"
 *   insn=0x00000000004F5CFC string=0x00000000004F5D00 "!"
 *   insn=0x00000000004F5D00 string=0x00000000004F5D04 "c"
 *   insn=0x00000000004F5D08 string=0x00000000004F5D0C "`"
 *   insn=0x00000000004F5D18 string=0x00000000004F5D1C "`"
 *   insn=0x00000000004F5D40 string=0x00000000004F5D44 "+"
 *   insn=0x00000000004F5D54 string=0x00000000004F5D70 "5"
 *   insn=0x00000000004F5D5C string=0x00000000004F5D60 "?y("
 *   insn=0x00000000004F5D60 string=0x00000000004F5D64 ""
 *   insn=0x00000000004F5D70 string=0x00000000004F5D74 "6"
 *   insn=0x00000000004F5D80 string=0x00000000004F5D84 "`"
 *   insn=0x00000000004F5D8C string=0x00000000004F5D90 "r\n"
 *   insn=0x00000000004F5D90 string=0x00000000004F5D94 " "
 *   insn=0x00000000004F5D94 string=0x00000000004F5D98 "`"
 *   insn=0x00000000004F5D98 string=0x00000000004F5D9C "b"
 *   insn=0x00000000004F5DA8 string=0x00000000004F5DAC "`"
 *   insn=0x00000000004F5DB8 string=0x00000000004F5DBC """
 *   insn=0x00000000004F5DBC string=0x00000000004F5DC0 "`"
 *   insn=0x00000000004F5DC0 string=0x00000000004F5DC4 "a\n@"
 *   insn=0x00000000004F5DC8 string=0x00000000004F5DCC "h"
 *   insn=0x00000000004F5DDC string=0x00000000004F5DE0 "^\n"
 *   insn=0x00000000004F5DE0 string=0x00000000004F5DE4 " "
 *   insn=0x00000000004F5DE4 string=0x00000000004F5DE8 "`"
 *   insn=0x00000000004F5DE8 string=0x00000000004F5DEC "b"
 *   insn=0x00000000004F5DF4 string=0x00000000004F5DF8 "w"
 *   insn=0x00000000004F5DF8 string=0x00000000004F5DFC "`"
 *   insn=0x00000000004F5E08 string=0x00000000004F5E0C "`"
 *   insn=0x00000000004F5E28 string=0x00000000004F5E2C "9"
 *   insn=0x00000000004F5E48 string=0x00000000004F5E4C "-"
 *   insn=0x00000000004F5E4C string=0x00000000004F5E50 "`"
 *   insn=0x00000000004F5E50 string=0x00000000004F5E54 "`"
 *   insn=0x00000000004F5E50 string=0x00000000004F5E7C "h"
 *   insn=0x00000000004F5E54 string=0x00000000004F5E58 "b"
 *   insn=0x00000000004F5E58 string=0x00000000004F5E5C "!"
 *   insn=0x00000000004F5E5C string=0x00000000004F5E60 "#"
 *   insn=0x00000000004F5E60 string=0x00000000004F5E64 "!"
 *   insn=0x00000000004F5E60 string=0x000000000059A3D9 "bad code"
 *   insn=0x00000000004F5E64 string=0x00000000004F5E68 "cd"
 *   insn=0x00000000004F5E68 string=0x00000000004F5E6C "Z"
 *   insn=0x00000000004F5E6C string=0x00000000004F5E70 "`"
 *   insn=0x00000000004F5E74 string=0x00000000004F5E78 "g"
 *   insn=0x00000000004F5E7C string=0x00000000004F5E80 "\t\t@"
 *   insn=0x00000000004F5E80 string=0x00000000004F5E84 "\n"
 *   insn=0x00000000004F5E84 string=0x00000000004F5E88 ")A"
 *   insn=0x00000000004F5E88 string=0x00000000004F5E8C "J"
 *   insn=0x00000000004F5E8C string=0x00000000004F5E90 "\t\t"
 *   insn=0x00000000004F5E90 string=0x00000000004F5E94 "\n"
 *   insn=0x00000000004F5E98 string=0x00000000004F5E9C ""
 *   insn=0x00000000004F5EA4 string=0x00000000004F5EA8 "A"
 *   insn=0x00000000004F5ED0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F5064(__int64 *a1, __int64 a2)
{
  __int64 v4; // x0
  unsigned int v5; // w9
  __int64 v6; // x20
  __int64 v7; // x8
  __int64 *v8; // x8
  __int64 v9; // x9
  _QWORD *v10; // x27
  void *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x8
  int v14; // w22
  void *v15; // x8
  int v16; // w22
  __int64 v17; // x0
  __int64 v18; // x21
  __int64 v19; // x9
  _DWORD *v20; // x10
  __int64 v21; // x11
  _DWORD *v22; // x10
  __int64 v23; // x9
  __int64 v24; // x28
  __int64 v25; // x26
  __int64 v26; // x9
  _DWORD *v27; // x9
  void *v28; // x25
  __int64 v29; // x0
  __int64 v30; // x8
  int v31; // w21
  _QWORD *v32; // x0
  __int64 v33; // x22
  __int64 i; // x8
  __int64 j; // x21
  int v36; // w22
  void *v37; // x8
  int v38; // w21
  __int64 v39; // x0
  __int64 v40; // x25
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x9
  _QWORD *v45; // x8
  __int64 v46; // x26
  void *v47; // x24
  __int64 v48; // x0
  __int64 v49; // x9
  int v50; // w21
  _QWORD *v51; // x0
  __int64 k; // x8
  __int64 m; // x25
  void *v54; // x23
  __int64 v55; // x0
  __int64 v56; // x8
  __int16 v57; // w10
  _QWORD v59[2]; // [xsp+10h] [xbp-60h] BYREF

  v59[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *a1;
  v5 = (unsigned __int16)++*(_WORD *)(v4 + 96);
  if ( v5 >= 0xC9 )
  {
    sub_4EF3D4((_QWORD *)v4, "%s: %s in precompiled chunk", (const char *)a1[3], "code too deep");
    sub_4EB814(*a1, 3);
  }
  v6 = sub_4ED6C8(v4);
  v7 = *(_QWORD *)(*a1 + 16);
  *(_QWORD *)v7 = v6;
  *(_DWORD *)(v7 + 8) = 9;
  v8 = (__int64 *)(*a1 + 16);
  v9 = *v8;
  if ( *(_QWORD *)(*a1 + 56) - *v8 <= 16 )
  {
    sub_4EBBB8(*a1, 1);
    v8 = (__int64 *)(*a1 + 16);
    v9 = *v8;
  }
  *v8 = v9 + 16;
  v10 = a1 + 1;
  if ( sub_4F8758(a1[1], v59) )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
    sub_4EB814(*a1, 3);
  }
  if ( v59[0] )
  {
    v11 = (void *)sub_4F8824(*a1, a1[2]);
    if ( sub_4F8758(a1[1], v11) )
    {
      sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
      sub_4EB814(*a1, 3);
    }
    v12 = sub_4F356C(*a1, (char *)v11, v59[0] - 1LL);
  }
  else
  {
    v12 = 0;
  }
  if ( v12 )
    v13 = v12;
  else
    v13 = a2;
  *(_QWORD *)(v6 + 64) = v13;
  if ( sub_4F8758(*v10, v59) )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
    sub_4EB814(*a1, 3);
  }
  if ( (v59[0] & 0x80000000) != 0 )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "bad integer");
    sub_4EB814(*a1, 3);
  }
  *(_DWORD *)(v6 + 96) = v59[0];
  if ( sub_4F8758(*v10, v59) )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
    sub_4EB814(*a1, 3);
  }
  if ( (v59[0] & 0x80000000) != 0 )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "bad integer");
    sub_4EB814(*a1, 3);
  }
  *(_DWORD *)(v6 + 100) = v59[0];
  if ( sub_4F8758(*v10, v59) )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
    sub_4EB814(*a1, 3);
  }
  *(_BYTE *)(v6 + 112) = v59[0];
  if ( sub_4F8758(*v10, v59) )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
    sub_4EB814(*a1, 3);
  }
  *(_BYTE *)(v6 + 113) = v59[0];
  if ( sub_4F8758(*v10, v59) )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
    sub_4EB814(*a1, 3);
  }
  *(_BYTE *)(v6 + 114) = v59[0];
  if ( sub_4F8758(*v10, v59) )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
    sub_4EB814(*a1, 3);
  }
  *(_BYTE *)(v6 + 115) = v59[0];
  if ( sub_4F8758(*v10, v59) )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
    sub_4EB814(*a1, 3);
  }
  v14 = v59[0];
  if ( (v59[0] & 0x80000000) != 0 )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "bad integer");
    sub_4EB814(*a1, 3);
  }
  v15 = (void *)sub_4EED74(*a1, 0, 0, 4LL * SLODWORD(v59[0]));
  *(_QWORD *)(v6 + 24) = v15;
  *(_DWORD *)(v6 + 80) = v14;
  if ( sub_4F8758(*v10, v15) )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
    sub_4EB814(*a1, 3);
  }
  if ( sub_4F8758(*v10, v59) )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
    sub_4EB814(*a1, 3);
  }
  v16 = v59[0];
  if ( (v59[0] & 0x80000000) != 0 )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "bad integer");
    sub_4EB814(*a1, 3);
  }
  v17 = sub_4EED74(*a1, 0, 0, 16LL * SLODWORD(v59[0]));
  v18 = v17;
  *(_QWORD *)(v6 + 16) = v17;
  *(_DWORD *)(v6 + 76) = v16;
  if ( v16 >= 1 )
  {
    if ( v16 == 1 )
    {
      v19 = 0;
    }
    else
    {
      v19 = v16 & 0xFFFFFFFE;
      v20 = (_DWORD *)(v17 + 24);
      v21 = v19;
      do
      {
        *(v20 - 4) = 0;
        *v20 = 0;
        v20 += 8;
        v21 -= 2;
      }
      while ( v21 );
      if ( v19 == v16 )
        goto LABEL_51;
    }
    v22 = (_DWORD *)(v17 + 16 * v19 + 8);
    v23 = (unsigned int)v16 - v19;
    do
    {
      --v23;
      *v22 = 0;
      v22 += 4;
    }
    while ( v23 );
LABEL_51:
    v24 = 0;
    v25 = (unsigned int)v16 - 1LL;
    while ( !sub_4F8758(*v10, v59) )
    {
      switch ( LOBYTE(v59[0]) )
      {
        case 0:
          *(_DWORD *)(v18 + v24 + 8) = 0;
          if ( !v25 )
            goto LABEL_75;
          goto LABEL_52;
        case 1:
          if ( sub_4F8758(*v10, v59) )
          {
            sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
            sub_4EB814(*a1, 3);
          }
          v27 = (_DWORD *)(v18 + v24);
          *v27 = LOBYTE(v59[0]) != 0;
          v27[2] = 1;
          if ( !v25 )
            goto LABEL_75;
          goto LABEL_52;
        case 3:
          if ( sub_4F8758(*v10, v59) )
          {
            sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
            sub_4EB814(*a1, 3);
          }
          v26 = v18 + v24;
          *(_QWORD *)v26 = v59[0];
          *(_DWORD *)(v26 + 8) = 3;
          if ( !v25 )
            goto LABEL_75;
          goto LABEL_52;
        case 4:
          if ( sub_4F8758(*v10, v59) )
          {
            sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
            sub_4EB814(*a1, 3);
          }
          if ( v59[0] )
          {
            v28 = (void *)sub_4F8824(*a1, a1[2]);
            if ( sub_4F8758(a1[1], v28) )
            {
              sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
              sub_4EB814(*a1, 3);
            }
            v29 = sub_4F356C(*a1, (char *)v28, v59[0] - 1LL);
          }
          else
          {
            v29 = 0;
          }
          v30 = v18 + v24;
          *(_QWORD *)v30 = v29;
          *(_DWORD *)(v30 + 8) = 4;
          if ( !v25 )
            goto LABEL_75;
LABEL_52:
          v18 = *(_QWORD *)(v6 + 16);
          v24 += 16;
          --v25;
          break;
        default:
          sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "bad constant");
          sub_4EB814(*a1, 3);
      }
    }
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
    sub_4EB814(*a1, 3);
  }
LABEL_75:
  if ( sub_4F8758(*v10, v59) )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
    sub_4EB814(*a1, 3);
  }
  v31 = v59[0];
  if ( (v59[0] & 0x80000000) != 0 )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "bad integer");
    sub_4EB814(*a1, 3);
  }
  v32 = (_QWORD *)sub_4EED74(*a1, 0, 0, 8LL * SLODWORD(v59[0]));
  *(_QWORD *)(v6 + 32) = v32;
  *(_DWORD *)(v6 + 88) = v31;
  if ( v31 >= 1 )
  {
    v33 = (unsigned int)v31;
    *v32 = 0;
    if ( v31 != 1 )
    {
      for ( i = 1; i != v31; *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * i++) = 0 )
        ;
    }
    for ( j = 0; j != v33; ++j )
      *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * j) = sub_4F5064(a1, *(_QWORD *)(v6 + 64));
  }
  if ( sub_4F8758(*v10, v59) )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
    sub_4EB814(*a1, 3);
  }
  v36 = v59[0];
  if ( (v59[0] & 0x80000000) != 0 )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "bad integer");
    sub_4EB814(*a1, 3);
  }
  v37 = (void *)sub_4EED74(*a1, 0, 0, 4LL * SLODWORD(v59[0]));
  *(_QWORD *)(v6 + 40) = v37;
  *(_DWORD *)(v6 + 84) = v36;
  if ( sub_4F8758(*v10, v37) )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
    sub_4EB814(*a1, 3);
  }
  if ( sub_4F8758(*v10, v59) )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
    sub_4EB814(*a1, 3);
  }
  v38 = v59[0];
  if ( (v59[0] & 0x80000000) != 0 )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "bad integer");
    sub_4EB814(*a1, 3);
  }
  v39 = sub_4EED74(*a1, 0, 0, 16LL * SLODWORD(v59[0]));
  *(_QWORD *)(v6 + 48) = v39;
  *(_DWORD *)(v6 + 92) = v38;
  if ( v38 >= 1 )
  {
    v40 = (unsigned int)v38;
    if ( v38 == 1 )
    {
      v41 = 0;
    }
    else
    {
      v41 = v38 & 0xFFFFFFFE;
      v42 = (_QWORD *)(v39 + 16);
      v43 = v41;
      do
      {
        *(v42 - 2) = 0;
        *v42 = 0;
        v42 += 4;
        v43 -= 2;
      }
      while ( v43 );
      if ( v41 == v38 )
      {
LABEL_106:
        v46 = 0;
        do
        {
          if ( sub_4F8758(*v10, v59) )
          {
            sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
            sub_4EB814(*a1, 3);
          }
          if ( v59[0] )
          {
            v47 = (void *)sub_4F8824(*a1, a1[2]);
            if ( sub_4F8758(a1[1], v47) )
            {
              sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
              sub_4EB814(*a1, 3);
            }
            v48 = sub_4F356C(*a1, (char *)v47, v59[0] - 1LL);
          }
          else
          {
            v48 = 0;
          }
          *(_QWORD *)(*(_QWORD *)(v6 + 48) + v46) = v48;
          if ( sub_4F8758(*v10, v59) )
          {
            sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
            sub_4EB814(*a1, 3);
          }
          if ( (v59[0] & 0x80000000) != 0 )
          {
            sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "bad integer");
            sub_4EB814(*a1, 3);
          }
          *(_DWORD *)(*(_QWORD *)(v6 + 48) + v46 + 8) = v59[0];
          if ( sub_4F8758(*v10, v59) )
          {
            sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
            sub_4EB814(*a1, 3);
          }
          if ( (v59[0] & 0x80000000) != 0 )
          {
            sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "bad integer");
            sub_4EB814(*a1, 3);
          }
          --v40;
          v49 = *(_QWORD *)(v6 + 48) + v46;
          v46 += 16;
          *(_DWORD *)(v49 + 12) = v59[0];
        }
        while ( v40 );
        goto LABEL_123;
      }
    }
    v44 = (unsigned int)v38 - v41;
    v45 = (_QWORD *)(v39 + 16 * v41);
    do
    {
      --v44;
      *v45 = 0;
      v45 += 2;
    }
    while ( v44 );
    goto LABEL_106;
  }
LABEL_123:
  if ( sub_4F8758(*v10, v59) )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
    sub_4EB814(*a1, 3);
  }
  v50 = v59[0];
  if ( (v59[0] & 0x80000000) != 0 )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "bad integer");
    sub_4EB814(*a1, 3);
  }
  v51 = (_QWORD *)sub_4EED74(*a1, 0, 0, 8LL * SLODWORD(v59[0]));
  *(_QWORD *)(v6 + 56) = v51;
  *(_DWORD *)(v6 + 72) = v50;
  if ( v50 >= 1 )
  {
    *v51 = 0;
    if ( v50 != 1 )
    {
      for ( k = 1; k != v50; *(_QWORD *)(*(_QWORD *)(v6 + 56) + 8 * k++) = 0 )
        ;
    }
    for ( m = 0; m != v50; *(_QWORD *)(*(_QWORD *)(v6 + 56) + 8 * m++) = v55 )
    {
      if ( sub_4F8758(*v10, v59) )
      {
        sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
        sub_4EB814(*a1, 3);
      }
      if ( v59[0] )
      {
        v54 = (void *)sub_4F8824(*a1, a1[2]);
        if ( sub_4F8758(a1[1], v54) )
        {
          sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "unexpected end");
          sub_4EB814(*a1, 3);
        }
        v55 = sub_4F356C(*a1, (char *)v54, v59[0] - 1LL);
      }
      else
      {
        v55 = 0;
      }
    }
  }
  if ( !sub_4EAB00(v6) )
  {
    sub_4EF3D4((_QWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], "bad code");
    sub_4EB814(*a1, 3);
  }
  v56 = *a1;
  v57 = *(_WORD *)(*a1 + 96) - 1;
  *(_QWORD *)(v56 + 16) = *(_QWORD *)(*a1 + 16) - 16LL;
  *(_WORD *)(v56 + 96) = v57;
  return v6;
}

