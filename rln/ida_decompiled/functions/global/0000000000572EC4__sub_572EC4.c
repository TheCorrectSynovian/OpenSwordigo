/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000572EC4
 * Mangled: sub_572EC4
 * Demangled: sub_572EC4
 *
 * Callers: 6
 *   0x0000000000572EC4  sub_572EC4
 *   0x00000000005743B0  sub_5743B0
 *   0x0000000000574B04  sub_574B04
 *   0x0000000000576A34  sub_576A34
 *   0x000000000057781C  sub_57781C
 *   0x0000000000577FB4  sub_577FB4
 *
 * Callees: 10
 *   0x00000000001FA120  .strcmp
 *   0x0000000000571F00  sub_571F00
 *   0x0000000000572BBC  sub_572BBC
 *   0x0000000000572CEC  sub_572CEC
 *   0x00000000005743B0  sub_5743B0
 *   0x0000000000574B04  sub_574B04
 *   0x00000000005762BC  sub_5762BC
 *   0x00000000005764B0  sub_5764B0
 *   0x00000000005776A4  sub_5776A4
 *   0x000000000057781C  sub_57781C
 *
 * Referenced strings: 444
 *   insn=0x0000000000572EE4 string=0x0000000000572EE8 "5"
 *   insn=0x0000000000572EF4 string=0x0000000000572EF8 "("
 *   insn=0x0000000000572EF8 string=0x0000000000572EFC "<"
 *   insn=0x0000000000572F00 string=0x0000000000572F04 ":"
 *   insn=0x0000000000572F04 string=0x0000000000572F08 "_"
 *   insn=0x0000000000572F08 string=0x0000000000572F0C "`%"
 *   insn=0x0000000000572F0C string=0x00000000005733B8 """
 *   insn=0x0000000000572F10 string=0x0000000000572F14 "t"
 *   insn=0x0000000000572F14 string=0x0000000000572F18 "x"
 *   insn=0x0000000000572F14 string=0x00000000005A02B0 "44"
 *   insn=0x0000000000572F18 string=0x0000000000572F1C "v"
 *   insn=0x0000000000572F1C string=0x00000000005A0698 "qu"
 *   insn=0x0000000000572F30 string=0x0000000000572F34 "Z'"
 *   insn=0x0000000000572F34 string=0x0000000000572F38 "_?"
 *   insn=0x0000000000572F38 string=0x0000000000572F3C "i"
 *   insn=0x0000000000572F5C string=0x0000000000572F60 "`"
 *   insn=0x0000000000572F5C string=0x0000000000571F00 "$"
 *   insn=0x0000000000572F64 string=0x0000000000572F68 "|"
 *   insn=0x0000000000572F70 string=0x0000000000572F74 "_"
 *   insn=0x0000000000572F78 string=0x0000000000572F7C "y'"
 *   insn=0x0000000000572F80 string=0x0000000000572F84 "|"
 *   insn=0x0000000000572FA8 string=0x0000000000572FAC "a"
 *   insn=0x0000000000572FAC string=0x0000000000572FB0 " "
 *   insn=0x0000000000572FB8 string=0x0000000000572FBC "uW@"
 *   insn=0x0000000000572FBC string=0x0000000000572FC0 "c"
 *   insn=0x0000000000572FC0 string=0x0000000000572FC4 ":"
 *   insn=0x0000000000572FC4 string=0x0000000000572FC8 "zW"
 *   insn=0x0000000000572FE8 string=0x0000000000572FEC "`"
 *   insn=0x0000000000572FF0 string=0x0000000000572FF4 "!"
 *   insn=0x0000000000572FF4 string=0x0000000000572FF8 "?$"
 *   insn=0x000000000057302C string=0x0000000000573128 "a"
 *   insn=0x0000000000573048 string=0x000000000057304C "`"
 *   insn=0x0000000000573050 string=0x0000000000573054 "?|"
 *   insn=0x0000000000573060 string=0x0000000000573064 "a"
 *   insn=0x00000000005730A4 string=0x00000000005730A8 "|"
 *   insn=0x00000000005730B0 string=0x00000000005730B4 "a"
 *   insn=0x00000000005730BC string=0x00000000005730C0 " "
 *   insn=0x00000000005730C4 string=0x00000000005730C8 " "
 *   insn=0x00000000005730C8 string=0x00000000005730CC "uW"
 *   insn=0x00000000005730CC string=0x00000000005730D0 " "
 *   insn=0x00000000005730D4 string=0x00000000005730D8 " "
 *   insn=0x00000000005730D8 string=0x00000000005730FC "!"
 *   insn=0x00000000005730FC string=0x0000000000573100 "a"
 *   insn=0x0000000000573114 string=0x00000000001FA120 "0'"
 *   insn=0x0000000000573118 string=0x000000000057311C "@"
 *   insn=0x0000000000573124 string=0x00000000005734D4 "@@9"
 *   insn=0x000000000057314C string=0x0000000000573150 "|"
 *   insn=0x0000000000573158 string=0x000000000057315C "A\t"
 *   insn=0x0000000000573164 string=0x0000000000573168 "f"
 *   insn=0x000000000057316C string=0x0000000000573170 "a"
 *   insn=0x0000000000573184 string=0x0000000000573188 "`"
 *   insn=0x000000000057319C string=0x00000000005731A0 "|"
 *   insn=0x00000000005731A0 string=0x00000000005731A4 "b+@"
 *   insn=0x00000000005731A4 string=0x00000000005731A8 "`/@"
 *   insn=0x00000000005731A8 string=0x00000000005731AC "_"
 *   insn=0x00000000005731B0 string=0x00000000005731B4 "@|@"
 *   insn=0x00000000005731B4 string=0x00000000005731B8 "a"
 *   insn=0x00000000005731BC string=0x00000000005731C0 "B"
 *   insn=0x00000000005731C0 string=0x00000000005731C4 "`"
 *   insn=0x00000000005731C4 string=0x00000000005731C8 "b+"
 *   insn=0x00000000005731C8 string=0x00000000005731CC """
 *   insn=0x00000000005731D4 string=0x00000000005731D8 "#h "
 *   insn=0x00000000005731D8 string=0x00000000005731DC "Z"
 *   insn=0x00000000005731DC string=0x00000000005731E0 "a"
 *   insn=0x00000000005731E8 string=0x00000000005731EC "."
 *   insn=0x00000000005731F0 string=0x00000000005731F4 "a"
 *   insn=0x0000000000573204 string=0x0000000000573208 "a"
 *   insn=0x0000000000573210 string=0x0000000000573214 "a"
 *   insn=0x0000000000573214 string=0x0000000000573218 "bS@"
 *   insn=0x0000000000573214 string=0x00000000005A0BF0 "st"
 *   insn=0x0000000000573218 string=0x000000000057321C "!"
 *   insn=0x0000000000573228 string=0x000000000057322C "B"
 *   insn=0x0000000000573230 string=0x0000000000573234 "bS"
 *   insn=0x0000000000573244 string=0x0000000000573248 ""
 *   insn=0x0000000000573248 string=0x000000000057324C "a"
 *   insn=0x000000000057324C string=0x0000000000573254 " X`xa"
 *   insn=0x000000000057324C string=0x00000000005A02C0 "+"
 *   insn=0x0000000000573254 string=0x0000000000573258 "a"
 *   insn=0x0000000000573258 string=0x000000000057325C " "
 *   insn=0x0000000000573260 string=0x0000000000573480 "@"
 *   insn=0x0000000000573270 string=0x0000000000573274 "?"
 *   insn=0x000000000057327C string=0x0000000000573280 "g"
 *   insn=0x0000000000573284 string=0x0000000000573288 "a"
 *   insn=0x0000000000573288 string=0x00000000005A0680 "cl"
 *   insn=0x000000000057328C string=0x0000000000573290 "!"
 *   insn=0x0000000000573298 string=0x000000000057329C "a"
 *   insn=0x000000000057329C string=0x00000000005A0688 "dt"
 *   insn=0x00000000005732A0 string=0x00000000005732A4 "! "
 *   insn=0x00000000005732AC string=0x00000000005732B0 "a"
 *   insn=0x00000000005732B0 string=0x00000000005A0690 "pt"
 *   insn=0x00000000005732B4 string=0x00000000005732B8 "!@"
 *   insn=0x00000000005732BC string=0x00000000005732C0 "@'"
 *   insn=0x00000000005732C4 string=0x00000000005732C8 "z"
 *   insn=0x00000000005732CC string=0x00000000005732D0 "`"
 *   insn=0x00000000005732D8 string=0x00000000005732DC "`'"
 *   insn=0x0000000000573304 string=0x0000000000573308 "a"
 *   insn=0x0000000000573308 string=0x000000000057330C "p"
 *   insn=0x0000000000573324 string=0x0000000000573328 "a"
 *   insn=0x0000000000573328 string=0x000000000057332C "h"
 *   insn=0x0000000000573334 string=0x0000000000573338 "c"
 *   insn=0x000000000057333C string=0x0000000000573340 "c"
 *   insn=0x0000000000573364 string=0x0000000000573368 "a"
 *   insn=0x0000000000573368 string=0x000000000057336C "X"
 *   insn=0x000000000057337C string=0x0000000000573380 "a"
 *   insn=0x0000000000573380 string=0x0000000000573384 " "
 *   insn=0x00000000005733AC string=0x00000000005733B0 "a"
 *   insn=0x00000000005733B0 string=0x00000000005733B4 "F"
 *   insn=0x00000000005733E8 string=0x00000000005733EC "`"
 *   insn=0x00000000005733F0 string=0x00000000005733F4 "\n"
 *   insn=0x000000000057340C string=0x0000000000573410 "a"
 *   insn=0x0000000000573410 string=0x0000000000573414 "."
 *   insn=0x000000000057341C string=0x0000000000573420 "|"
 *   insn=0x000000000057342C string=0x0000000000573430 " "
 *   insn=0x0000000000573434 string=0x0000000000573438 "`"
 *   insn=0x0000000000573458 string=0x000000000057345C "a"
 *   insn=0x000000000057345C string=0x0000000000573460 ""
 *   insn=0x0000000000573474 string=0x0000000000573478 "a"
 *   insn=0x0000000000573478 string=0x000000000057347C ","
 *   insn=0x0000000000573484 string=0x0000000000573488 "`"
 *   insn=0x0000000000573488 string=0x0000000000573494 "A@9?"
 *   insn=0x0000000000573494 string=0x0000000000573498 "?"
 *   insn=0x000000000057349C string=0x00000000005734A0 "`"
 *   insn=0x00000000005734A4 string=0x00000000005734A8 "?|"
 *   insn=0x00000000005734D8 string=0x00000000005734DC "`"
 *   insn=0x00000000005734E0 string=0x00000000005734E4 "!"
 *   insn=0x0000000000573500 string=0x0000000000573504 "a"
 *   insn=0x0000000000573504 string=0x0000000000573508 " "
 *   insn=0x000000000057350C string=0x0000000000573510 "@"
 *   insn=0x0000000000573510 string=0x00000000005737B8 "!"
 *   insn=0x0000000000573518 string=0x00000000005738A8 " "
 *   insn=0x0000000000573520 string=0x0000000000573524 "A"
 *   insn=0x0000000000573524 string=0x0000000000573528 " "
 *   insn=0x000000000057353C string=0x0000000000573540 "a"
 *   insn=0x0000000000573548 string=0x000000000057354C "m"
 *   insn=0x0000000000573554 string=0x0000000000573558 "A"
 *   insn=0x000000000057355C string=0x0000000000573560 "h"
 *   insn=0x0000000000573564 string=0x0000000000573568 "!"
 *   insn=0x0000000000573570 string=0x0000000000573574 "c"
 *   insn=0x0000000000573578 string=0x000000000057357C "a"
 *   insn=0x0000000000573588 string=0x000000000057358C "N"
 *   insn=0x00000000005735A4 string=0x00000000005735A8 "V"
 *   insn=0x00000000005735B4 string=0x00000000005735B8 "S"
 *   insn=0x00000000005735C4 string=0x00000000005735C8 "O"
 *   insn=0x00000000005735CC string=0x00000000005735D0 "c"
 *   insn=0x00000000005735D0 string=0x00000000005735D4 "Y"
 *   insn=0x00000000005735DC string=0x00000000005735E0 "t"
 *   insn=0x00000000005735E4 string=0x00000000005735E8 ">"
 *   insn=0x00000000005735F4 string=0x00000000005735F8 "a"
 *   insn=0x00000000005735F8 string=0x00000000005735FC " "
 *   insn=0x0000000000573614 string=0x00000000005739CC " "
 *   insn=0x0000000000573618 string=0x000000000057361C "@"
 *   insn=0x000000000057361C string=0x0000000000573984 " "
 *   insn=0x0000000000573620 string=0x0000000000573624 "B"
 *   insn=0x0000000000573624 string=0x0000000000573628 "_$"
 *   insn=0x0000000000573628 string=0x000000000057362C ")"
 *   insn=0x0000000000573630 string=0x0000000000573634 "@"
 *   insn=0x0000000000573634 string=0x000000000057385C " "
 *   insn=0x000000000057363C string=0x0000000000573640 "c"
 *   insn=0x0000000000573640 string=0x000000000057364C " "
 *   insn=0x0000000000573660 string=0x0000000000573664 " "
 *   insn=0x0000000000573664 string=0x0000000000573A08 "a"
 *   insn=0x000000000057366C string=0x0000000000573670 "`)"
 *   insn=0x0000000000573670 string=0x0000000000573B9C "B@"
 *   insn=0x0000000000573678 string=0x0000000000573A68 "A@"
 *   insn=0x0000000000573680 string=0x0000000000573684 "`"
 *   insn=0x0000000000573680 string=0x0000000000573A14 "a"
 *   insn=0x0000000000573688 string=0x000000000057368C "?|"
 *   insn=0x000000000057368C string=0x0000000000573690 " _"
 *   insn=0x0000000000573694 string=0x0000000000573698 "a"
 *   insn=0x00000000005736B0 string=0x00000000005736B4 "a"
 *   insn=0x00000000005736B4 string=0x00000000005736B8 " "
 *   insn=0x00000000005736BC string=0x00000000005736C0 "`&"
 *   insn=0x00000000005736D0 string=0x0000000000573944 " "
 *   insn=0x00000000005736D8 string=0x00000000005738D4 " "
 *   insn=0x00000000005736DC string=0x00000000005736E0 "B"
 *   insn=0x00000000005736E0 string=0x00000000005736E4 "_$"
 *   insn=0x00000000005736E4 string=0x00000000005736E8 ")\t"
 *   insn=0x00000000005736EC string=0x00000000005736F0 "@"
 *   insn=0x00000000005736F0 string=0x00000000005737F8 " "
 *   insn=0x00000000005736F8 string=0x00000000005736FC "c"
 *   insn=0x00000000005736FC string=0x0000000000573708 " "
 *   insn=0x000000000057373C string=0x0000000000573740 "`"
 *   insn=0x0000000000573744 string=0x0000000000573748 "?|"
 *   insn=0x0000000000573750 string=0x0000000000573754 "2"
 *   insn=0x000000000057376C string=0x0000000000573770 "t"
 *   insn=0x0000000000573778 string=0x000000000057377C "!"
 *   insn=0x000000000057377C string=0x0000000000573780 "?"
 *   insn=0x0000000000573790 string=0x0000000000573794 "H"
 *   insn=0x00000000005737BC string=0x00000000005737C0 "a"
 *   insn=0x00000000005737C0 string=0x00000000005737C4 "_"
 *   insn=0x0000000000573800 string=0x0000000000573804 "!"
 *   insn=0x0000000000573804 string=0x0000000000573808 "a"
 *   insn=0x000000000057380C string=0x0000000000573810 "("
 *   insn=0x0000000000573814 string=0x0000000000573818 "@"
 *   insn=0x0000000000573818 string=0x000000000057381C "`"
 *   insn=0x0000000000573854 string=0x0000000000573858 ":"
 *   insn=0x0000000000573864 string=0x0000000000573868 "!"
 *   insn=0x0000000000573868 string=0x000000000057386C "a"
 *   insn=0x0000000000573878 string=0x000000000057387C "a"
 *   insn=0x000000000057387C string=0x0000000000573880 " "
 *   insn=0x00000000005738B4 string=0x00000000005738B8 "!"
 *   insn=0x00000000005738BC string=0x00000000005738C0 "a"
 *   insn=0x00000000005738DC string=0x00000000005738E0 " "
 *   insn=0x00000000005738E0 string=0x00000000005738E4 "`"
 *   insn=0x00000000005738E4 string=0x00000000005738E8 " @9"
 *   insn=0x00000000005738F0 string=0x00000000005738F4 "!"
 *   insn=0x00000000005738F8 string=0x00000000005738FC "a"
 *   insn=0x00000000005738FC string=0x0000000000573900 "b+@"
 *   insn=0x0000000000573904 string=0x0000000000573908 "`/@"
 *   insn=0x0000000000573908 string=0x000000000057390C "_"
 *   insn=0x0000000000573910 string=0x0000000000573914 "A|@"
 *   insn=0x0000000000573914 string=0x0000000000573918 "`"
 *   insn=0x0000000000573918 string=0x000000000057391C "#"
 *   insn=0x000000000057391C string=0x0000000000573920 "B"
 *   insn=0x0000000000573920 string=0x0000000000573924 "a"
 *   insn=0x0000000000573924 string=0x0000000000573928 "b+"
 *   insn=0x0000000000573938 string=0x000000000057393C "|"
 *   insn=0x000000000057394C string=0x000000000057406C "!"
 *   insn=0x0000000000573954 string=0x0000000000573958 "!"
 *   insn=0x000000000057395C string=0x0000000000573960 "a"
 *   insn=0x0000000000573970 string=0x0000000000573974 "A\t"
 *   insn=0x0000000000573974 string=0x0000000000573978 "b"
 *   insn=0x0000000000573988 string=0x000000000057398C "a"
 *   insn=0x000000000057398C string=0x0000000000573990 " "
 *   insn=0x0000000000573990 string=0x0000000000573994 "`"
 *   insn=0x0000000000573994 string=0x0000000000573998 " @9"
 *   insn=0x000000000057399C string=0x00000000005739A0 "!"
 *   insn=0x00000000005739A0 string=0x00000000005739A4 "!"
 *   insn=0x00000000005739A8 string=0x00000000005739AC "a"
 *   insn=0x00000000005739AC string=0x00000000005739B0 "z+@"
 *   insn=0x00000000005739B0 string=0x00000000005739B4 "b/@"
 *   insn=0x00000000005739B4 string=0x00000000005739B8 "_"
 *   insn=0x00000000005739BC string=0x00000000005739C0 " "
 *   insn=0x00000000005739BC string=0x0000000000573C10 "B"
 *   insn=0x00000000005739C4 string=0x00000000005739C8 "="
 *   insn=0x00000000005739D0 string=0x00000000005739D4 "@1"
 *   insn=0x00000000005739D4 string=0x0000000000573FFC "!"
 *   insn=0x00000000005739DC string=0x00000000005739E0 "!"
 *   insn=0x00000000005739E4 string=0x00000000005739E8 "a"
 *   insn=0x00000000005739F0 string=0x00000000005739F4 "A\t"
 *   insn=0x00000000005739FC string=0x0000000000573A00 "@"
 *   insn=0x0000000000573A08 string=0x0000000000573A0C " "
 *   insn=0x0000000000573A0C string=0x0000000000573A10 "+"
 *   insn=0x0000000000573A18 string=0x0000000000573A1C " "
 *   insn=0x0000000000573A1C string=0x0000000000573A20 "'"
 *   insn=0x0000000000573A28 string=0x0000000000573A2C " "
 *   insn=0x0000000000573A30 string=0x0000000000573A34 "`"
 *   insn=0x0000000000573A3C string=0x0000000000573A40 "\"
 *   insn=0x0000000000573A50 string=0x0000000000573A54 "+"
 *   insn=0x0000000000573A58 string=0x0000000000573A5C "a"
 *   insn=0x0000000000573A5C string=0x0000000000573A60 " "
 *   insn=0x0000000000573A68 string=0x0000000000573A6C "?"
 *   insn=0x0000000000573A6C string=0x0000000000573A70 "("
 *   insn=0x0000000000573A70 string=0x0000000000573A74 "`"
 *   insn=0x0000000000573A7C string=0x0000000000573A80 "a"
 *   insn=0x0000000000573A80 string=0x0000000000573A84 " "
 *   insn=0x0000000000573A8C string=0x0000000000573A90 "cG"
 *   insn=0x0000000000573A90 string=0x0000000000573A94 "c"
 *   insn=0x0000000000573AA0 string=0x0000000000573AA4 "c"
 *   insn=0x0000000000573AA4 string=0x0000000000573AA8 "c"
 *   insn=0x0000000000573AA8 string=0x0000000000573AAC "A"
 *   insn=0x0000000000573AD4 string=0x0000000000573AD8 "a"
 *   insn=0x0000000000573AD8 string=0x0000000000573ADC " "
 *   insn=0x0000000000573AE8 string=0x0000000000573AEC "?"
 *   insn=0x0000000000573AF0 string=0x0000000000573AF4 "`"
 *   insn=0x0000000000573AF4 string=0x00000000005A02D8 "Q"
 *   insn=0x0000000000573AFC string=0x0000000000573B00 "a"
 *   insn=0x0000000000573B00 string=0x0000000000573B04 " "
 *   insn=0x0000000000573B0C string=0x0000000000573B10 "a"
 *   insn=0x0000000000573B10 string=0x0000000000573B14 "cS@"
 *   insn=0x0000000000573B14 string=0x0000000000573B18 "!"
 *   insn=0x0000000000573B2C string=0x0000000000573B30 "c"
 *   insn=0x0000000000573B34 string=0x0000000000573B38 "cS"
 *   insn=0x0000000000573B38 string=0x0000000000573B3C "y"
 *   insn=0x0000000000573B50 string=0x0000000000573B54 "?"
 *   insn=0x0000000000573B54 string=0x0000000000573B58 "H"
 *   insn=0x0000000000573B58 string=0x0000000000573B5C "`"
 *   insn=0x0000000000573B5C string=0x00000000005A02E0 "7"
 *   insn=0x0000000000573B64 string=0x0000000000573B68 "a"
 *   insn=0x0000000000573B68 string=0x0000000000573B6C " "
 *   insn=0x0000000000573B70 string=0x0000000000573FA8 "@"
 *   insn=0x0000000000573B74 string=0x0000000000573B78 "r"
 *   insn=0x0000000000573B7C string=0x0000000000573B80 "["
 *   insn=0x0000000000573B84 string=0x0000000000573B88 "n"
 *   insn=0x0000000000573B94 string=0x0000000000573B98 "j"
 *   insn=0x0000000000573B9C string=0x0000000000573BA0 "a"
 *   insn=0x0000000000573BA0 string=0x0000000000573BA4 "cS@"
 *   insn=0x0000000000573BA4 string=0x0000000000573BA8 "!"
 *   insn=0x0000000000573BAC string=0x0000000000573BB0 "@"
 *   insn=0x0000000000573BB0 string=0x0000000000573BB4 "\"
 *   insn=0x0000000000573BB8 string=0x0000000000573BBC "c"
 *   insn=0x0000000000573BC0 string=0x0000000000573BC4 "cS"
 *   insn=0x0000000000573BC4 string=0x0000000000573BC8 "V"
 *   insn=0x0000000000573BD0 string=0x0000000000573BD4 "A"
 *   insn=0x0000000000573BD4 string=0x0000000000573BD8 "?"
 *   insn=0x0000000000573BDC string=0x0000000000573BE0 "`"
 *   insn=0x0000000000573BE0 string=0x00000000005A02E8 "/"
 *   insn=0x0000000000573BE8 string=0x0000000000573BEC "a"
 *   insn=0x0000000000573BEC string=0x0000000000573BF0 " "
 *   insn=0x0000000000573BF4 string=0x0000000000573C64 "@@"
 *   insn=0x0000000000573C00 string=0x0000000000573C04 "a"
 *   insn=0x0000000000573C04 string=0x0000000000573C08 " "
 *   insn=0x0000000000573C10 string=0x0000000000573C14 "c"
 *   insn=0x0000000000573C14 string=0x0000000000573C18 "E"
 *   insn=0x0000000000573C18 string=0x0000000000573C1C "Z"
 *   insn=0x0000000000573C20 string=0x0000000000573C24 "z+"
 *   insn=0x0000000000573C24 string=0x0000000000573C28 "z"
 *   insn=0x0000000000573C30 string=0x0000000000573C34 "eh""
 *   insn=0x0000000000573C34 string=0x0000000000573C38 "@"
 *   insn=0x0000000000573C38 string=0x0000000000573C3C " "
 *   insn=0x0000000000573C4C string=0x0000000000573C50 "a"
 *   insn=0x0000000000573C50 string=0x0000000000573C54 " "
 *   insn=0x0000000000573C58 string=0x0000000000573C5C "U"
 *   insn=0x0000000000573C6C string=0x0000000000573C70 "?"
 *   insn=0x0000000000573C80 string=0x0000000000573C84 "a"
 *   insn=0x0000000000573C88 string=0x0000000000573C8C "!"
 *   insn=0x0000000000573C8C string=0x0000000000573C90 "$"
 *   insn=0x0000000000573C90 string=0x0000000000573C94 "`2"
 *   insn=0x0000000000573C94 string=0x0000000000573C98 "a"
 *   insn=0x0000000000573C9C string=0x0000000000573CA0 "! "
 *   insn=0x0000000000573CA8 string=0x0000000000573CAC "a"
 *   insn=0x0000000000573CB0 string=0x0000000000573CB4 "!@"
 *   insn=0x0000000000573CB8 string=0x0000000000573CBC "`3"
 *   insn=0x0000000000573CC8 string=0x0000000000573CCC "`"
 *   insn=0x0000000000573CF4 string=0x0000000000573CF8 "l"
 *   insn=0x0000000000573D00 string=0x0000000000573D04 "`"
 *   insn=0x0000000000573D08 string=0x0000000000573D0C "A"
 *   insn=0x0000000000573D10 string=0x0000000000573D14 "?"
 *   insn=0x0000000000573D18 string=0x0000000000573D1C "`"
 *   insn=0x0000000000573D20 string=0x0000000000573D24 "?|"
 *   insn=0x0000000000573D40 string=0x0000000000573D44 "o"
 *   insn=0x0000000000573D50 string=0x0000000000573D54 "U"
 *   insn=0x0000000000573D7C string=0x0000000000573D80 "`"
 *   insn=0x0000000000573D84 string=0x0000000000573D88 "a"
 *   insn=0x0000000000573D9C string=0x0000000000573DA0 "Y"
 *   insn=0x0000000000573DA4 string=0x0000000000573DA8 "a"
 *   insn=0x0000000000573DA8 string=0x0000000000573DAC " "
 *   insn=0x0000000000573DB4 string=0x00000000005742D0 "!"
 *   insn=0x0000000000573DBC string=0x00000000005742AC """
 *   insn=0x0000000000573DC4 string=0x0000000000573DC8 """
 *   insn=0x0000000000573DC8 string=0x0000000000573DCC "_"
 *   insn=0x0000000000573DCC string=0x0000000000573DD0 "a&"
 *   insn=0x0000000000573DDC string=0x0000000000573DE0 "a"
 *   insn=0x0000000000573DE8 string=0x0000000000573DEC "E"
 *   insn=0x0000000000573DF4 string=0x0000000000573DF8 "A"
 *   insn=0x0000000000573DFC string=0x0000000000573E00 "@"
 *   insn=0x0000000000573E04 string=0x0000000000573E08 "!"
 *   insn=0x0000000000573E0C string=0x0000000000573E10 "&"
 *   insn=0x0000000000573E20 string=0x0000000000573E24 "?"
 *   insn=0x0000000000573E24 string=0x0000000000573E28 "`"
 *   insn=0x0000000000573E30 string=0x0000000000573E34 "z"
 *   insn=0x0000000000573E3C string=0x0000000000573E40 "a"
 *   insn=0x0000000000573E44 string=0x0000000000573E48 "!"
 *   insn=0x0000000000573E54 string=0x0000000000573E58 "@"
 *   insn=0x0000000000573E58 string=0x0000000000573E5C "a"
 *   insn=0x0000000000573E60 string=0x0000000000573E64 "! "
 *   insn=0x0000000000573E74 string=0x0000000000573E78 "a"
 *   insn=0x0000000000573E84 string=0x0000000000573E88 "`"
 *   insn=0x0000000000573E94 string=0x0000000000573E98 "`"
 *   insn=0x0000000000573EA0 string=0x0000000000573EA4 "`"
 *   insn=0x0000000000573EE8 string=0x0000000000573EEC " "
 *   insn=0x0000000000573EEC string=0x0000000000573EF0 "@"
 *   insn=0x0000000000573EF8 string=0x0000000000573EFC "@"
 *   insn=0x0000000000573F00 string=0x0000000000573F04 "`"
 *   insn=0x0000000000573F08 string=0x0000000000573F0C "A"
 *   insn=0x0000000000573F14 string=0x0000000000573F18 "&"
 *   insn=0x0000000000573F28 string=0x0000000000573F2C "`"
 *   insn=0x0000000000573F30 string=0x0000000000573F34 "?"
 *   insn=0x0000000000573F38 string=0x0000000000573F3C "?"
 *   insn=0x0000000000573F40 string=0x0000000000573F44 "?"
 *   insn=0x0000000000573F44 string=0x0000000000573F48 "a"
 *   insn=0x0000000000573F54 string=0x0000000000573F58 "A"
 *   insn=0x0000000000573F5C string=0x0000000000573F60 "/"
 *   insn=0x0000000000573F68 string=0x0000000000573F6C "a"
 *   insn=0x0000000000573F7C string=0x0000000000573F80 "A"
 *   insn=0x0000000000573F8C string=0x0000000000573F90 "!"
 *   insn=0x0000000000573FA0 string=0x0000000000573FA4 "g"
 *   insn=0x0000000000573FAC string=0x0000000000573FB0 "`"
 *   insn=0x0000000000573FB0 string=0x0000000000573FBC "A"
 *   insn=0x0000000000573FBC string=0x0000000000573FC0 "?"
 *   insn=0x0000000000573FC0 string=0x0000000000573FC4 "a"
 *   insn=0x0000000000573FC4 string=0x0000000000573FC8 "`"
 *   insn=0x0000000000573FCC string=0x0000000000573FD0 "?|"
 *   insn=0x0000000000574000 string=0x0000000000574004 "a"
 *   insn=0x0000000000574010 string=0x0000000000574014 "'\t"
 *   insn=0x0000000000574018 string=0x000000000057401C "`"
 *   insn=0x000000000057402C string=0x0000000000574030 "!"
 *   insn=0x000000000057402C string=0x00000000005740DC "z"
 *   insn=0x0000000000574040 string=0x0000000000574044 "a"
 *   insn=0x0000000000574044 string=0x0000000000574048 " "
 *   insn=0x0000000000574064 string=0x0000000000574068 "6"
 *   insn=0x0000000000574070 string=0x0000000000574074 "a"
 *   insn=0x0000000000574080 string=0x0000000000574084 "\t"
 *   insn=0x0000000000574088 string=0x000000000057408C "`"
 *   insn=0x000000000057409C string=0x00000000005740A0 "!"
 *   insn=0x00000000005740AC string=0x00000000005740B0 "$"
 *   insn=0x00000000005740BC string=0x00000000005740C0 "O"
 *   insn=0x00000000005740CC string=0x00000000005740D0 " "
 *   insn=0x00000000005740D4 string=0x00000000005740D8 "\n"
 *   insn=0x00000000005740F4 string=0x00000000005740F8 "!"
 *   insn=0x00000000005740FC string=0x0000000000574100 "j"
 *   insn=0x0000000000574120 string=0x0000000000574124 "."
 *   insn=0x000000000057412C string=0x0000000000574130 "a"
 *   insn=0x000000000057414C string=0x0000000000574150 "V"
 *   insn=0x0000000000574158 string=0x000000000057415C "!"
 *   insn=0x000000000057415C string=0x0000000000574160 "?"
 *   insn=0x000000000057417C string=0x0000000000574180 "a"
 *   insn=0x0000000000574188 string=0x000000000057418C "-"
 *   insn=0x00000000005741AC string=0x00000000005741B0 "m"
 *   insn=0x00000000005741BC string=0x00000000005741C0 ":"
 *   insn=0x00000000005741C4 string=0x00000000005741C8 "O"
 *   insn=0x00000000005741D4 string=0x00000000005741D8 ";"
 *   insn=0x00000000005741F0 string=0x00000000005741F4 "C"
 *   insn=0x00000000005741F8 string=0x00000000005741FC "+"
 *   insn=0x0000000000574204 string=0x0000000000574208 "?"
 *   insn=0x0000000000574214 string=0x0000000000574218 "a"
 *   insn=0x000000000057421C string=0x0000000000574220 "d"
 *   insn=0x0000000000574220 string=0x0000000000574224 "P"
 *   insn=0x000000000057422C string=0x0000000000574230 "a"
 *   insn=0x0000000000574230 string=0x0000000000574234 "L"
 *   insn=0x000000000057423C string=0x0000000000574240 "!"
 *   insn=0x0000000000574258 string=0x000000000057425C ")"
 *   insn=0x0000000000574268 string=0x000000000057426C "`"
 *   insn=0x000000000057426C string=0x0000000000574270 "8"
 *   insn=0x0000000000574278 string=0x000000000057427C "a"
 *   insn=0x0000000000574280 string=0x0000000000574284 "K"
 *   insn=0x0000000000574294 string=0x0000000000574298 "b"
 *   insn=0x00000000005742AC string=0x00000000005742B0 "_"
 *   insn=0x00000000005742B0 string=0x00000000005742B4 "A"
 *   insn=0x00000000005742B4 string=0x00000000005742B8 "!"
 *   insn=0x00000000005742BC string=0x00000000005742C0 "a"
 *   insn=0x00000000005742C4 string=0x00000000005742C8 ":"
 *   insn=0x00000000005742D4 string=0x00000000005742D8 "a"
 *   insn=0x00000000005742E4 string=0x00000000005742E8 "2"
 *   insn=0x00000000005742EC string=0x00000000005742F0 "{"
 *   insn=0x00000000005742F8 string=0x00000000005742FC "!"
 *   insn=0x00000000005742FC string=0x0000000000574300 "?"
 *   insn=0x0000000000574310 string=0x0000000000574314 "("
 *   insn=0x0000000000574320 string=0x0000000000574324 "X"
 *   insn=0x0000000000574328 string=0x000000000057432C "<"
 *   insn=0x0000000000574330 string=0x0000000000574334 "j"
 *   insn=0x0000000000574360 string=0x0000000000574364 "^"
 *   insn=0x0000000000574370 string=0x0000000000574374 "a"
 *   insn=0x00000000005743A4 string=0x00000000005743A8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_572EC4(__int64 a1)
{
  _BYTE *v1; // x1
  __int64 v2; // x25
  unsigned __int8 *v3; // x28
  int v4; // w26
  __int64 *v6; // x19
  __int64 v7; // x2
  __int64 v8; // x0
  unsigned __int8 *v10; // x3
  int v11; // w21
  int v12; // w0
  int *v13; // x0
  __int64 v14; // x23
  int v15; // w0
  _BYTE *v16; // x0
  __int64 v17; // x3
  __int64 v18; // x0
  unsigned __int8 *v19; // x1
  const char *v20; // x26
  int v21; // w0
  __int64 v22; // x0
  __int64 v23; // x26
  int v24; // w2
  __int64 v25; // x1
  __int64 v26; // x0
  const char **v27; // x28
  const char *v28; // x0
  char *v29; // x0
  __int64 v30; // x28
  __int64 v31; // x3
  __int64 v32; // x0
  __int64 v33; // x2
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x23
  __int64 v37; // x3
  int v38; // w0
  int v39; // w0
  _BYTE *v40; // x0
  __int64 v41; // x0
  int v42; // w0
  __int64 v43; // x26
  int v44; // w0
  __int64 v45; // x3
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x0
  unsigned __int8 *v49; // x1
  int v50; // w0
  int *v51; // x0
  int v52; // w0
  _BYTE *v53; // x0
  __int64 v54; // x3
  __int64 v55; // x0
  int v56; // w1
  unsigned __int8 *v57; // x1
  int v58; // w0
  int *v59; // x0
  __int64 v60; // x28
  int v61; // w0
  _BYTE *v62; // x0
  __int64 v63; // x3
  char v64; // w0
  __int64 v65; // x0
  __int64 v66; // x0
  __int64 v67; // x28
  int v68; // w2
  __int64 v69; // x0
  int v70; // w0
  __int64 v71; // x0
  __int64 v72; // x0
  int v73; // w26
  int v74; // w0
  __int64 v75; // x2
  int v76; // w1
  __int64 v77; // x0
  __int64 v78; // x2
  __int64 v79; // x0
  __int64 v80; // x2
  __int64 v81; // x0
  const char *v82; // x2
  int v83; // w0
  const char *v84; // x2
  const char *v85; // x28
  const char *v86; // x0
  __int64 v87; // x3
  __int64 v88; // x2
  char *v89; // x0
  __int64 v90; // x3
  int v91; // w0
  _BYTE *v92; // x0
  __int64 v93; // x0
  int v94; // w0
  __int64 v95; // x28
  __int64 v96; // x0
  __int64 v97; // x0
  char *v98; // x0
  const char *v99; // x2
  __int64 v100; // x3
  __int64 v101; // x0
  int v102; // w0
  unsigned __int8 *v103; // x0
  int v104; // w1
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x0
  int v108; // w0
  _BYTE *v109; // x0
  __int64 v110; // x0
  __int64 v111; // x0
  __int64 v112; // x28
  __int64 v113; // x28
  __int64 v114; // x3
  int v115; // w0
  __int64 v116; // x0
  char v117; // w0
  __int64 v118; // x0
  unsigned __int8 *v119; // x1
  __int64 v120; // x0
  char v121; // w0
  __int64 v122; // x0
  char *v123; // [xsp+68h] [xbp+68h]
  char *v124; // [xsp+68h] [xbp+68h]
  char *v125; // [xsp+68h] [xbp+68h]
  char *v126; // [xsp+68h] [xbp+68h]
  char *v127; // [xsp+68h] [xbp+68h]
  char *v128; // [xsp+68h] [xbp+68h]
  char *v129; // [xsp+68h] [xbp+68h]
  char *v130; // [xsp+70h] [xbp+70h]
  char *v131; // [xsp+70h] [xbp+70h]
  char *v132; // [xsp+70h] [xbp+70h]
  char *v133; // [xsp+70h] [xbp+70h]
  char *v134; // [xsp+70h] [xbp+70h]
  char *v135; // [xsp+70h] [xbp+70h]
  char *v136; // [xsp+70h] [xbp+70h]
  char *v137; // [xsp+70h] [xbp+70h]
  char *v138; // [xsp+70h] [xbp+70h]
  char *v139; // [xsp+70h] [xbp+70h]
  char *v140; // [xsp+70h] [xbp+70h]
  __int64 v141; // [xsp+78h] [xbp+78h]
  __int64 v142; // [xsp+78h] [xbp+78h]
  __int64 v143; // [xsp+78h] [xbp+78h]
  __int64 v144; // [xsp+78h] [xbp+78h]
  __int64 v145; // [xsp+78h] [xbp+78h]
  __int64 v146; // [xsp+88h] [xbp+88h] BYREF

  v1 = *(_BYTE **)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 72);
  if ( (unsigned __int8)(*v1 - 73) > 1u )
    return 0;
  v3 = v1 + 1;
  *(_QWORD *)(a1 + 24) = v1 + 1;
  v4 = (unsigned __int8)v1[1];
  if ( v4 != 69 )
  {
    v146 = 0;
    v6 = &v146;
    while ( 1 )
    {
      switch ( v4 )
      {
        case 'I':
        case 'J':
          v7 = sub_572EC4(a1);
          goto LABEL_6;
        case 'L':
          v7 = sub_5776A4(a1);
          goto LABEL_6;
        case 'X':
          v10 = v3 + 1;
          v11 = *(_DWORD *)(a1 + 84);
          *(_QWORD *)(a1 + 24) = v3 + 1;
          *(_DWORD *)(a1 + 84) = 1;
          v12 = v3[1];
          switch ( v12 )
          {
            case 'L':
              v7 = sub_5776A4(a1);
              v19 = *(unsigned __int8 **)(a1 + 24);
              goto LABEL_32;
            case 'T':
              v7 = sub_572CEC(a1);
              v19 = *(unsigned __int8 **)(a1 + 24);
              goto LABEL_32;
            case 's':
              v21 = v3[2];
              if ( v21 == 114 )
              {
                *(_QWORD *)(a1 + 24) = v3 + 3;
                v36 = sub_574B04(a1);
                v37 = sub_5764B0(a1);
                if ( **(_BYTE **)(a1 + 24) == 73 )
                {
                  v144 = v37;
                  v48 = sub_572EC4(a1);
                  v37 = sub_571F00(a1, 4, v144, v48);
                }
                v7 = sub_571F00(a1, 1, v36, v37);
                v19 = *(unsigned __int8 **)(a1 + 24);
                goto LABEL_32;
              }
              if ( v21 == 112 )
              {
                *(_QWORD *)(a1 + 24) = v3 + 3;
                v22 = sub_57781C(a1);
                v7 = sub_571F00(a1, 74, v22, 0);
                v19 = *(unsigned __int8 **)(a1 + 24);
                goto LABEL_32;
              }
              break;
            case 'f':
              if ( v3[2] == 112 )
              {
                *(_QWORD *)(a1 + 24) = v3 + 3;
                if ( v3[3] == 84 )
                {
                  v23 = 0;
                  *(_QWORD *)(a1 + 24) = v3 + 4;
                }
                else
                {
                  v38 = sub_572BBC(a1) + 1;
                  v23 = v38;
                  if ( !v38 )
                  {
                    v19 = *(unsigned __int8 **)(a1 + 24);
                    goto LABEL_39;
                  }
                }
                v24 = *(_DWORD *)(a1 + 40);
                if ( v24 >= *(_DWORD *)(a1 + 44) )
                  goto LABEL_38;
                v25 = *(_QWORD *)(a1 + 32);
                v26 = 24LL * v24;
                *(_DWORD *)(a1 + 40) = v24 + 1;
                v7 = v25 + v26;
                if ( !(v25 + v26) )
                  goto LABEL_38;
                *(_DWORD *)(v25 + v26) = 6;
                *(_QWORD *)(v7 + 8) = v23;
                v19 = *(unsigned __int8 **)(a1 + 24);
                goto LABEL_32;
              }
              break;
            default:
              if ( (unsigned __int8)(v12 - 48) <= 9u )
                goto LABEL_29;
              if ( v12 == 111 )
              {
                if ( v3[2] == 110 )
                {
                  *(_QWORD *)(a1 + 24) = v3 + 3;
LABEL_29:
                  v18 = sub_5764B0(a1);
                  v19 = *(unsigned __int8 **)(a1 + 24);
                  if ( !v18 )
                    goto LABEL_39;
                  v7 = v18;
                  if ( *v19 == 73 )
                  {
                    v142 = v18;
                    v35 = sub_572EC4(a1);
                    v7 = sub_571F00(a1, 4, v142, v35);
                    v19 = *(unsigned __int8 **)(a1 + 24);
                  }
                  goto LABEL_32;
                }
              }
              else if ( (v12 == 116 || v12 == 105) && v3[2] == 108 )
              {
                v33 = 0;
                if ( v12 == 116 )
                {
                  v33 = sub_574B04(a1);
                  v10 = *(unsigned __int8 **)(a1 + 24);
                }
                *(_QWORD *)(a1 + 24) = v10 + 2;
                v141 = v33;
                v34 = sub_5743B0(a1, 69);
                v7 = sub_571F00(a1, 48, v141, v34);
                v19 = *(unsigned __int8 **)(a1 + 24);
                goto LABEL_32;
              }
              break;
          }
          v13 = (int *)sub_5762BC(a1);
          v14 = (__int64)v13;
          if ( !v13 )
            goto LABEL_38;
          v15 = *v13;
          if ( v15 != 49 )
          {
            if ( v15 == 50 )
            {
              switch ( *(_DWORD *)(v14 + 8) )
              {
                case 0:
                  goto LABEL_62;
                case 1:
                  goto LABEL_69;
                case 2:
                  v20 = 0;
                  goto LABEL_54;
                case 3:
                  v20 = 0;
                  goto LABEL_36;
                default:
                  goto LABEL_38;
              }
            }
            if ( v15 != 51 )
            {
LABEL_38:
              v19 = *(unsigned __int8 **)(a1 + 24);
LABEL_39:
              v7 = 0;
              goto LABEL_32;
            }
            v16 = *(_BYTE **)(a1 + 24);
            if ( *v16 == 95 )
            {
              *(_QWORD *)(a1 + 24) = v16 + 1;
              v17 = sub_5743B0(a1, 69);
            }
            else
            {
LABEL_69:
              v17 = sub_57781C(a1);
            }
            goto LABEL_70;
          }
          v27 = *(const char ***)(v14 + 8);
          v20 = *v27;
          v28 = *v27;
          *(_DWORD *)(a1 + 80) += *((_DWORD *)v27 + 4) - 2;
          if ( !strcmp(v28, "st") )
          {
            v17 = sub_574B04(a1);
LABEL_70:
            v7 = sub_571F00(a1, 54, v14, v17);
            v19 = *(unsigned __int8 **)(a1 + 24);
            goto LABEL_32;
          }
          break;
        default:
          v7 = sub_574B04(a1);
          goto LABEL_6;
      }
      switch ( *((_DWORD *)v27 + 5) )
      {
        case 0:
LABEL_62:
          v7 = sub_571F00(a1, 53, v14, 0);
          v19 = *(unsigned __int8 **)(a1 + 24);
          goto LABEL_32;
        case 1:
          v39 = *(unsigned __int8 *)v20;
          if ( v39 != 109 && v39 != 112 || *((unsigned __int8 *)v20 + 1) != v39 )
            goto LABEL_69;
          v40 = *(_BYTE **)(a1 + 24);
          if ( *v40 == 95 )
          {
            *(_QWORD *)(a1 + 24) = v40 + 1;
            goto LABEL_69;
          }
          v41 = sub_57781C(a1);
          v17 = sub_571F00(a1, 56, v41, v41);
          goto LABEL_70;
        case 2:
LABEL_54:
          v29 = **(char ***)(v14 + 8);
          if ( v29[1] == 99 && ((v64 = *v29, (unsigned __int8)(v64 - 114) <= 1u) || (unsigned __int8)(v64 - 99) <= 1u) )
            v30 = sub_574B04(a1);
          else
            v30 = sub_57781C(a1);
          if ( !strcmp(v20, "cl") )
          {
            v31 = sub_5743B0(a1, 69);
          }
          else if ( !strcmp(v20, "dt") || !strcmp(v20, "pt") )
          {
            v31 = sub_5764B0(a1);
            if ( **(_BYTE **)(a1 + 24) == 73 )
            {
              v145 = v31;
              v65 = sub_572EC4(a1);
              v31 = sub_571F00(a1, 4, v145, v65);
            }
          }
          else
          {
            v31 = sub_57781C(a1);
          }
          v32 = sub_571F00(a1, 56, v30, v31);
          v7 = sub_571F00(a1, 55, v14, v32);
          v19 = *(unsigned __int8 **)(a1 + 24);
          goto LABEL_32;
        case 3:
LABEL_36:
          if ( !strcmp(v20, "qu") )
          {
            v143 = sub_57781C(a1);
            v49 = *(unsigned __int8 **)(a1 + 24);
            v50 = *v49;
            switch ( v50 )
            {
              case 'L':
                v43 = sub_5776A4(a1);
                v57 = *(unsigned __int8 **)(a1 + 24);
                v58 = *v57;
                goto LABEL_108;
              case 'T':
                v43 = sub_572CEC(a1);
                v57 = *(unsigned __int8 **)(a1 + 24);
                v58 = *v57;
                goto LABEL_108;
              case 's':
                v74 = v49[1];
                if ( v74 == 114 )
                {
                  *(_QWORD *)(a1 + 24) = v49 + 2;
                  v43 = sub_574B04(a1);
                  v112 = sub_5764B0(a1);
                  if ( **(_BYTE **)(a1 + 24) == 73 )
                  {
                    v116 = sub_572EC4(a1);
                    v54 = sub_571F00(a1, 4, v112, v116);
                    v56 = 1;
                    v55 = a1;
                    goto LABEL_107;
                  }
                  v43 = sub_571F00(a1, 1, v43, v112);
                  v57 = *(unsigned __int8 **)(a1 + 24);
                  v58 = *v57;
                  goto LABEL_108;
                }
                if ( v74 != 112 )
                  goto LABEL_100;
                *(_QWORD *)(a1 + 24) = v49 + 2;
                v75 = sub_57781C(a1);
                v76 = 74;
                v77 = a1;
LABEL_158:
                v43 = sub_571F00(v77, v76, v75, 0);
                goto LABEL_159;
            }
            if ( v50 != 102 )
            {
              if ( (unsigned __int8)(v50 - 48) > 9u )
              {
                if ( v50 != 111 )
                {
                  if ( (v50 == 116 || v50 == 105) && v49[1] == 108 )
                  {
                    v78 = 0;
                    if ( v50 == 116 )
                    {
                      v78 = sub_574B04(a1);
                      v49 = *(unsigned __int8 **)(a1 + 24);
                    }
                    *(_QWORD *)(a1 + 24) = v49 + 2;
                    v131 = (char *)v78;
                    v79 = sub_5743B0(a1, 69);
                    v43 = sub_571F00(a1, 48, (__int64)v131, v79);
                    v57 = *(unsigned __int8 **)(a1 + 24);
                    v58 = *v57;
                    goto LABEL_108;
                  }
LABEL_100:
                  v51 = (int *)sub_5762BC(a1);
                  v43 = (__int64)v51;
                  if ( v51 )
                  {
                    v52 = *v51;
                    if ( v52 != 49 )
                    {
                      if ( v52 == 50 )
                      {
                        switch ( *(_DWORD *)(v43 + 8) )
                        {
                          case 0:
                            goto LABEL_241;
                          case 1:
                            goto LABEL_105;
                          case 2:
                            v85 = 0;
                            goto LABEL_185;
                          case 3:
                            v85 = 0;
                            goto LABEL_199;
                          default:
                            goto LABEL_161;
                        }
                      }
                      if ( v52 == 51 )
                      {
                        v53 = *(_BYTE **)(a1 + 24);
                        if ( *v53 == 95 )
                        {
                          *(_QWORD *)(a1 + 24) = v53 + 1;
                          v54 = sub_5743B0(a1, 69);
                        }
                        else
                        {
LABEL_105:
                          v54 = sub_57781C(a1);
                        }
                        v55 = a1;
                        v56 = 54;
LABEL_107:
                        v43 = sub_571F00(v55, v56, v43, v54);
                        v57 = *(unsigned __int8 **)(a1 + 24);
                        v58 = *v57;
LABEL_108:
                        if ( v58 == 76 )
                        {
                          v45 = sub_5776A4(a1);
                          goto LABEL_88;
                        }
                        if ( v58 == 84 )
                        {
                          v45 = sub_572CEC(a1);
                          goto LABEL_88;
                        }
                        if ( v58 != 115 )
                        {
                          if ( v58 != 102 )
                          {
                            if ( (unsigned __int8)(v58 - 48) > 9u )
                            {
                              if ( v58 != 111 )
                              {
LABEL_114:
                                if ( (v58 == 116 || v58 == 105) && v57[1] == 108 )
                                {
                                  v80 = 0;
                                  if ( v58 == 116 )
                                    v80 = sub_574B04(a1);
                                  v132 = (char *)v80;
                                  *(_QWORD *)(a1 + 24) += 2LL;
                                  v81 = sub_5743B0(a1, 69);
                                  v45 = sub_571F00(a1, 48, (__int64)v132, v81);
                                  goto LABEL_88;
                                }
                                goto LABEL_117;
                              }
                              if ( v57[1] != 110 )
                                goto LABEL_117;
                              *(_QWORD *)(a1 + 24) = v57 + 2;
                            }
                            v45 = sub_5764B0(a1);
                            if ( v45 && **(_BYTE **)(a1 + 24) == 73 )
                            {
                              v130 = (char *)v45;
                              v66 = sub_572EC4(a1);
                              v45 = sub_571F00(a1, 4, (__int64)v130, v66);
                            }
                            goto LABEL_88;
                          }
                          if ( v57[1] != 112 )
                            goto LABEL_117;
                          *(_QWORD *)(a1 + 24) = v57 + 2;
                          if ( v57[2] == 84 )
                          {
                            v67 = 0;
                            *(_QWORD *)(a1 + 24) = v57 + 3;
LABEL_144:
                            v68 = *(_DWORD *)(a1 + 40);
                            v45 = 0;
                            if ( v68 < *(_DWORD *)(a1 + 44) )
                            {
                              v69 = *(_QWORD *)(a1 + 32);
                              *(_DWORD *)(a1 + 40) = v68 + 1;
                              v45 = v69 + 24LL * v68;
                              if ( v45 )
                              {
                                *(_DWORD *)(v69 + 24LL * v68) = 6;
                                *(_QWORD *)(v45 + 8) = v67;
                              }
                            }
                            goto LABEL_88;
                          }
                          v115 = sub_572BBC(a1) + 1;
                          if ( v115 )
                          {
                            v67 = v115;
                            goto LABEL_144;
                          }
LABEL_174:
                          v45 = 0;
                          goto LABEL_88;
                        }
                        v70 = v57[1];
                        if ( v70 == 114 )
                        {
                          *(_QWORD *)(a1 + 24) = v57 + 2;
                          v113 = sub_574B04(a1);
                          v114 = sub_5764B0(a1);
                          if ( **(_BYTE **)(a1 + 24) == 73 )
                          {
                            v140 = (char *)v114;
                            v120 = sub_572EC4(a1);
                            v114 = sub_571F00(a1, 4, (__int64)v140, v120);
                          }
                          v45 = sub_571F00(a1, 1, v113, v114);
                          goto LABEL_88;
                        }
                        if ( v70 == 112 )
                        {
                          *(_QWORD *)(a1 + 24) = v57 + 2;
                          v71 = sub_57781C(a1);
                          v45 = sub_571F00(a1, 74, v71, 0);
                          goto LABEL_88;
                        }
LABEL_117:
                        v59 = (int *)sub_5762BC(a1);
                        v60 = (__int64)v59;
                        if ( !v59 )
                          goto LABEL_174;
                        v61 = *v59;
                        switch ( v61 )
                        {
                          case '1':
                            v123 = *(char **)(v60 + 8);
                            v133 = *(char **)v123;
                            v82 = *(const char **)v123;
                            *(_DWORD *)(a1 + 80) += *((_DWORD *)v123 + 4) - 2;
                            v83 = strcmp(v82, "st");
                            v84 = v133;
                            if ( v83 )
                            {
                              v45 = 0;
                              switch ( *((_DWORD *)v123 + 5) )
                              {
                                case 0:
LABEL_237:
                                  v45 = sub_571F00(a1, 53, v60, 0);
                                  goto LABEL_88;
                                case 1:
                                  v108 = (unsigned __int8)*v133;
                                  if ( v108 != 109 && v108 != 112 || (unsigned __int8)v133[1] != v108 )
                                    goto LABEL_122;
                                  v109 = *(_BYTE **)(a1 + 24);
                                  if ( *v109 != 95 )
                                  {
                                    v110 = sub_57781C(a1);
                                    v111 = sub_571F00(a1, 56, v110, v110);
                                    goto LABEL_234;
                                  }
                                  *(_QWORD *)(a1 + 24) = v109 + 1;
                                  goto LABEL_122;
                                case 2:
LABEL_210:
                                  v98 = **(char ***)(v60 + 8);
                                  if ( v98[1] == 99
                                    && ((v117 = *v98, (unsigned __int8)(v117 - 114) <= 1u)
                                     || (unsigned __int8)(v117 - 99) <= 1u) )
                                  {
                                    v127 = (char *)v84;
                                    v137 = (char *)sub_574B04(a1);
                                    v99 = v127;
                                  }
                                  else
                                  {
                                    v124 = (char *)v84;
                                    v137 = (char *)sub_57781C(a1);
                                    v99 = v124;
                                  }
                                  v125 = (char *)v99;
                                  if ( !strcmp(v99, "cl") )
                                  {
                                    v100 = sub_5743B0(a1, 69);
                                  }
                                  else if ( !strcmp(v125, "dt") || !strcmp(v125, "pt") )
                                  {
                                    v100 = sub_5764B0(a1);
                                    if ( **(_BYTE **)(a1 + 24) == 73 )
                                    {
                                      v128 = (char *)v100;
                                      v118 = sub_572EC4(a1);
                                      v100 = sub_571F00(a1, 4, (__int64)v128, v118);
                                    }
                                  }
                                  else
                                  {
                                    v100 = sub_57781C(a1);
                                  }
                                  v101 = sub_571F00(a1, 56, (__int64)v137, v100);
                                  v45 = sub_571F00(a1, 55, v60, v101);
                                  goto LABEL_88;
                                case 3:
LABEL_219:
                                  v138 = (char *)v84;
                                  if ( !strcmp(v84, "qu") )
                                  {
                                    v139 = (char *)sub_57781C(a1);
                                    v126 = (char *)sub_57781C(a1);
                                    v105 = sub_57781C(a1);
                                    goto LABEL_228;
                                  }
                                  if ( *v138 != 110 )
                                    goto LABEL_174;
                                  v102 = (unsigned __int8)v138[1];
                                  if ( v102 != 97 && v102 != 119 )
                                    goto LABEL_174;
                                  v139 = (char *)sub_5743B0(a1, 95);
                                  v126 = (char *)sub_574B04(a1);
                                  v103 = *(unsigned __int8 **)(a1 + 24);
                                  v104 = *v103;
                                  switch ( v104 )
                                  {
                                    case 'E':
                                      v119 = v103 + 1;
                                      v105 = 0;
                                      *(_QWORD *)(a1 + 24) = v119;
                                      goto LABEL_228;
                                    case 'p':
                                      v45 = 0;
                                      if ( v103[1] == 105 )
                                      {
                                        *(_QWORD *)(a1 + 24) = v103 + 2;
                                        v105 = sub_5743B0(a1, 69);
                                        goto LABEL_228;
                                      }
                                      break;
                                    case 'i':
                                      v45 = 0;
                                      if ( v103[1] == 108 )
                                      {
                                        v105 = sub_57781C(a1);
LABEL_228:
                                        v106 = sub_571F00(a1, 59, (__int64)v126, v105);
                                        v107 = sub_571F00(a1, 58, (__int64)v139, v106);
                                        v45 = sub_571F00(a1, 57, v60, v107);
                                        goto LABEL_88;
                                      }
                                      break;
                                    default:
                                      goto LABEL_174;
                                  }
                                  break;
                                default:
                                  goto LABEL_88;
                              }
                              goto LABEL_88;
                            }
                            v111 = sub_574B04(a1);
                            break;
                          case '2':
                            v45 = 0;
                            switch ( *(_DWORD *)(v60 + 8) )
                            {
                              case 0:
                                goto LABEL_237;
                              case 1:
                                goto LABEL_122;
                              case 2:
                                v84 = 0;
                                goto LABEL_210;
                              case 3:
                                v84 = 0;
                                goto LABEL_219;
                              default:
                                goto LABEL_88;
                            }
                            goto LABEL_88;
                          case '3':
                            v62 = *(_BYTE **)(a1 + 24);
                            if ( *v62 != 95 )
                            {
LABEL_122:
                              v63 = sub_57781C(a1);
                              goto LABEL_123;
                            }
                            *(_QWORD *)(a1 + 24) = v62 + 1;
                            v111 = sub_5743B0(a1, 69);
                            break;
                          default:
                            goto LABEL_174;
                        }
LABEL_234:
                        v63 = v111;
LABEL_123:
                        v45 = sub_571F00(a1, 54, v60, v63);
LABEL_88:
                        v46 = sub_571F00(a1, 59, v43, v45);
                        v47 = sub_571F00(a1, 58, v143, v46);
                        v7 = sub_571F00(a1, 57, v14, v47);
                        v19 = *(unsigned __int8 **)(a1 + 24);
                        goto LABEL_32;
                      }
LABEL_161:
                      v57 = *(unsigned __int8 **)(a1 + 24);
LABEL_162:
                      v43 = 0;
                      v58 = *v57;
                      goto LABEL_108;
                    }
                    v134 = *(char **)(v43 + 8);
                    v85 = *(const char **)v134;
                    v86 = *(const char **)v134;
                    *(_DWORD *)(a1 + 80) += *((_DWORD *)v134 + 4) - 2;
                    if ( !strcmp(v86, "st") )
                    {
                      v54 = sub_574B04(a1);
                      v56 = 54;
                      v55 = a1;
                      goto LABEL_107;
                    }
                    switch ( *((_DWORD *)v134 + 5) )
                    {
                      case 0:
LABEL_241:
                        v77 = a1;
                        v76 = 53;
                        v75 = v43;
                        goto LABEL_158;
                      case 1:
                        v91 = *(unsigned __int8 *)v85;
                        if ( v91 != 109 && v91 != 112 || *((unsigned __int8 *)v85 + 1) != v91 )
                          goto LABEL_105;
                        v92 = *(_BYTE **)(a1 + 24);
                        if ( *v92 != 95 )
                        {
                          v93 = sub_57781C(a1);
                          v54 = sub_571F00(a1, 56, v93, v93);
                          v56 = 54;
                          v55 = a1;
                          goto LABEL_107;
                        }
                        *(_QWORD *)(a1 + 24) = v92 + 1;
                        goto LABEL_105;
                      case 2:
LABEL_185:
                        v89 = **(char ***)(v43 + 8);
                        if ( v89[1] == 99
                          && ((v121 = *v89, (unsigned __int8)(v121 - 114) <= 1u) || (unsigned __int8)(v121 - 99) <= 1u) )
                        {
                          v135 = (char *)sub_574B04(a1);
                        }
                        else
                        {
                          v135 = (char *)sub_57781C(a1);
                        }
                        if ( !strcmp(v85, "cl") )
                        {
                          v90 = sub_5743B0(a1, 69);
                        }
                        else if ( !strcmp(v85, "dt") || !strcmp(v85, "pt") )
                        {
                          v90 = sub_5764B0(a1);
                          if ( **(_BYTE **)(a1 + 24) == 73 )
                          {
                            v129 = (char *)v90;
                            v122 = sub_572EC4(a1);
                            v90 = sub_571F00(a1, 4, (__int64)v129, v122);
                          }
                        }
                        else
                        {
                          v90 = sub_57781C(a1);
                        }
                        v54 = sub_571F00(a1, 56, (__int64)v135, v90);
                        v56 = 55;
                        v55 = a1;
                        goto LABEL_107;
                      case 3:
LABEL_199:
                        if ( strcmp(v85, "qu") )
                        {
                          if ( *v85 != 110 )
                            goto LABEL_161;
                          v94 = *((unsigned __int8 *)v85 + 1);
                          if ( v94 != 97 && v94 != 119 )
                            goto LABEL_161;
                          v136 = (char *)sub_5743B0(a1, 95);
                          v95 = sub_574B04(a1);
                          v57 = *(unsigned __int8 **)(a1 + 24);
                          v58 = *v57;
                          switch ( v58 )
                          {
                            case 'E':
                              v96 = 0;
                              *(_QWORD *)(a1 + 24) = v57 + 1;
                              goto LABEL_208;
                            case 'p':
                              if ( v57[1] == 105 )
                              {
                                *(_QWORD *)(a1 + 24) = v57 + 2;
                                v96 = sub_5743B0(a1, 69);
                                goto LABEL_208;
                              }
                              break;
                            case 'i':
                              if ( v57[1] == 108 )
                              {
                                v96 = sub_57781C(a1);
LABEL_208:
                                v97 = sub_571F00(a1, 59, v95, v96);
                                v54 = sub_571F00(a1, 58, (__int64)v136, v97);
                                v56 = 57;
                                v55 = a1;
                                goto LABEL_107;
                              }
                              break;
                            default:
                              v43 = 0;
                              goto LABEL_108;
                          }
                          v43 = 0;
                          goto LABEL_114;
                        }
                        v136 = (char *)sub_57781C(a1);
                        v95 = sub_57781C(a1);
                        v96 = sub_57781C(a1);
                        goto LABEL_208;
                      default:
                        goto LABEL_161;
                    }
                  }
LABEL_159:
                  v57 = *(unsigned __int8 **)(a1 + 24);
LABEL_160:
                  v58 = *v57;
                  goto LABEL_108;
                }
                if ( v49[1] != 110 )
                  goto LABEL_100;
                *(_QWORD *)(a1 + 24) = v49 + 2;
              }
              v43 = sub_5764B0(a1);
              v57 = *(unsigned __int8 **)(a1 + 24);
              v58 = *v57;
              if ( v43 && v58 == 73 )
              {
                v54 = sub_572EC4(a1);
                v56 = 4;
                v55 = a1;
                goto LABEL_107;
              }
              goto LABEL_108;
            }
            if ( v49[1] != 112 )
              goto LABEL_100;
            *(_QWORD *)(a1 + 24) = v49 + 2;
            if ( v49[2] == 84 )
            {
              v57 = v49 + 3;
              v72 = 0;
              *(_QWORD *)(a1 + 24) = v57;
            }
            else
            {
              LODWORD(v72) = sub_572BBC(a1) + 1;
              v57 = *(unsigned __int8 **)(a1 + 24);
              if ( !(_DWORD)v72 )
                goto LABEL_162;
              v72 = (int)v72;
            }
            v73 = *(_DWORD *)(a1 + 40);
            if ( v73 >= *(_DWORD *)(a1 + 44) )
            {
              v58 = *v57;
              v43 = 0;
              goto LABEL_108;
            }
            v87 = *(_QWORD *)(a1 + 32);
            v88 = 24LL * v73;
            *(_DWORD *)(a1 + 40) = v73 + 1;
            v43 = v87 + v88;
            if ( v87 + v88 )
            {
              *(_DWORD *)(v87 + v88) = 6;
              *(_QWORD *)(v43 + 8) = v72;
              v58 = *v57;
              goto LABEL_108;
            }
            goto LABEL_160;
          }
          if ( *v20 != 110 )
            goto LABEL_38;
          v42 = *((unsigned __int8 *)v20 + 1);
          if ( v42 != 97 && v42 != 119 )
            goto LABEL_38;
          v143 = sub_5743B0(a1, 95);
          v43 = sub_574B04(a1);
          v19 = *(unsigned __int8 **)(a1 + 24);
          v44 = *v19;
          if ( v44 == 69 )
          {
            v45 = 0;
            *(_QWORD *)(a1 + 24) = v19 + 1;
            goto LABEL_88;
          }
          if ( v44 == 112 )
          {
            v7 = 0;
            if ( v19[1] == 105 )
            {
              *(_QWORD *)(a1 + 24) = v19 + 2;
              v45 = sub_5743B0(a1, 69);
              goto LABEL_88;
            }
          }
          else
          {
            v7 = 0;
            if ( v44 == 105 && v19[1] == 108 )
            {
              v45 = sub_57781C(a1);
              goto LABEL_88;
            }
          }
LABEL_32:
          *(_DWORD *)(a1 + 84) = v11;
          if ( *v19 != 69 )
            return 0;
          *(_QWORD *)(a1 + 24) = v19 + 1;
LABEL_6:
          if ( !v7 )
            return 0;
          v8 = sub_571F00(a1, 47, v7, 0);
          *v6 = v8;
          if ( !v8 )
            return 0;
          v3 = *(unsigned __int8 **)(a1 + 24);
          v6 = (__int64 *)(v8 + 16);
          v4 = *v3;
          if ( v4 == 69 )
          {
            *(_QWORD *)(a1 + 72) = v2;
            *(_QWORD *)(a1 + 24) = v3 + 1;
            return v146;
          }
          break;
        default:
          goto LABEL_38;
      }
    }
  }
  *(_QWORD *)(a1 + 24) = v1 + 2;
  return sub_571F00(a1, 47, 0, 0);
}

