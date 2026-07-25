/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EE534
 * Mangled: sub_4EE534
 * Demangled: sub_4EE534
 *
 * Callers: 1
 *   0x00000000004EDD78  sub_4EDD78
 *
 * Callees: 5
 *   0x00000000001FA030  .strchr
 *   0x00000000004EBA24  sub_4EBA24
 *   0x00000000004EBB2C  sub_4EBB2C
 *   0x00000000004EE364  sub_4EE364
 *   0x00000000004F4E8C  sub_4F4E8C
 *
 * Referenced strings: 207
 *   insn=0x00000000004EE558 string=0x00000000004EE55C "h&@9i"@9\n"
 *   insn=0x00000000004EE55C string=0x00000000004EE560 "i"@9\n"
 *   insn=0x00000000004EE560 string=0x00000000004EE564 "\n"
 *   insn=0x00000000004EE564 string=0x00000000004EE568 "("
 *   insn=0x00000000004EE56C string=0x00000000004EE570 "j&"
 *   insn=0x00000000004EE570 string=0x00000000004EE574 "."
 *   insn=0x00000000004EE574 string=0x00000000004EE578 "I"
 *   insn=0x00000000004EE578 string=0x00000000004EE580 "(y"
 *   insn=0x00000000004EE578 string=0x0000000000599B38 "TJ"
 *   insn=0x00000000004EE580 string=0x00000000004EE584 ""
 *   insn=0x00000000004EE588 string=0x00000000004EE58C "h"
 *   insn=0x00000000004EE588 string=0x00000000004EE658 "h\n@"
 *   insn=0x00000000004EE588 string=0x00000000004EE6D0 "hR@"
 *   insn=0x00000000004EE588 string=0x00000000004EE830 "h6@"
 *   insn=0x00000000004EE590 string=0x00000000004EE594 "h\n@"
 *   insn=0x00000000004EE594 string=0x00000000004EE598 "h"
 *   insn=0x00000000004EE598 string=0x00000000004EE59C "\t%@9?"
 *   insn=0x00000000004EE59C string=0x00000000004EE5A0 "?"
 *   insn=0x00000000004EE5A4 string=0x00000000004EE5BC "\t)@9)"
 *   insn=0x00000000004EE5AC string=0x00000000004EE5B0 "m"
 *   insn=0x00000000004EE5B0 string=0x00000000004EE5B4 "h\n@"
 *   insn=0x00000000004EE5B4 string=0x00000000004EE5B8 "h"
 *   insn=0x00000000004EE5BC string=0x00000000004EE5C0 ")"
 *   insn=0x00000000004EE5CC string=0x00000000004EE5D0 "/"
 *   insn=0x00000000004EE5D4 string=0x00000000004EE5D8 "@"
 *   insn=0x00000000004EE5DC string=0x00000000004EE5E0 "!"
 *   insn=0x00000000004EE5E0 string=0x00000000004EE5E4 ""
 *   insn=0x00000000004EE5E4 string=0x00000000004EE5E8 "a"
 *   insn=0x00000000004EE5F4 string=0x00000000001FA030 "0'"
 *   insn=0x00000000004EE614 string=0x00000000004EE618 "h&@9"
 *   insn=0x00000000004EE614 string=0x00000000004EE644 "U"
 *   insn=0x00000000004EE624 string=0x00000000004EE628 "I"
 *   insn=0x00000000004EE628 string=0x00000000004EE62C "u"
 *   insn=0x00000000004EE62C string=0x00000000004EE630 "("
 *   insn=0x00000000004EE630 string=0x00000000004EE634 "h&"
 *   insn=0x00000000004EE638 string=0x00000000004EE63C "h"
 *   insn=0x00000000004EE648 string=0x00000000004EEA58 "h&@9y"
 *   insn=0x00000000004EE64C string=0x00000000004EE968 "u:@"
 *   insn=0x00000000004EE654 string=0x00000000004EE9B0 "h.@9"
 *   insn=0x00000000004EE65C string=0x00000000004EE660 "a"
 *   insn=0x00000000004EE660 string=0x00000000004EE664 "($@9"
 *   insn=0x00000000004EE668 string=0x00000000004EE66C "`"
 *   insn=0x00000000004EE66C string=0x00000000004EE678 "h*@9h "
 *   insn=0x00000000004EE670 string=0x00000000004EE674 "<"
 *   insn=0x00000000004EE678 string=0x00000000004EE67C "h "
 *   insn=0x00000000004EE67C string=0x00000000004EE680 "h.@9"
 *   insn=0x00000000004EE67C string=0x00000000004EEA88 "a"
 *   insn=0x00000000004EE684 string=0x00000000004EEADC "h*@9m.@9"
 *   insn=0x00000000004EE688 string=0x00000000004EE68C "v"
 *   insn=0x00000000004EE690 string=0x00000000004EE694 "?"
 *   insn=0x00000000004EE694 string=0x00000000004EE698 ""
 *   insn=0x00000000004EE69C string=0x00000000004EE6A0 ")$@9?"
 *   insn=0x00000000004EE6A0 string=0x00000000004EE6A4 "?"
 *   insn=0x00000000004EE6AC string=0x00000000004EE6B0 "-"
 *   insn=0x00000000004EE6B0 string=0x00000000004EE6B4 "h.@9"
 *   insn=0x00000000004EE6B8 string=0x00000000004EE6BC "\t"
 *   insn=0x00000000004EE6C4 string=0x00000000004EE6C8 "C"
 *   insn=0x00000000004EE6D8 string=0x00000000004EE6DC "iR"
 *   insn=0x00000000004EE6E0 string=0x00000000004EE6E4 "h&@9i"
 *   insn=0x00000000004EE6E4 string=0x00000000004EE6E8 "i"
 *   insn=0x00000000004EE6E8 string=0x00000000004EE6EC "y"
 *   insn=0x00000000004EE6EC string=0x00000000004EE6F0 "?"
 *   insn=0x00000000004EE6F0 string=0x00000000004EE6F4 "h&"
 *   insn=0x00000000004EE6F8 string=0x00000000004EE6FC "a>@"
 *   insn=0x00000000004EE6F8 string=0x00000000004EE714 "i*@"
 *   insn=0x00000000004EE6FC string=0x00000000004EE700 "($@9"
 *   insn=0x00000000004EE704 string=0x00000000004EE708 "`"
 *   insn=0x00000000004EE714 string=0x00000000004EE718 "j"
 *   insn=0x00000000004EE718 string=0x00000000004EE71C "h\n@"
 *   insn=0x00000000004EE71C string=0x00000000004EE720 "?"
 *   insn=0x00000000004EE724 string=0x00000000004EE728 ""
 *   insn=0x00000000004EE728 string=0x00000000004EE748 "v"@"
 *   insn=0x00000000004EE72C string=0x00000000004EE730 "+\t@"
 *   insn=0x00000000004EE730 string=0x00000000004EE734 ")"
 *   insn=0x00000000004EE738 string=0x00000000004EE73C "u1"
 *   insn=0x00000000004EE73C string=0x00000000004EE740 "?"
 *   insn=0x00000000004EE740 string=0x00000000004EE744 "i"
 *   insn=0x00000000004EE764 string=0x00000000004EE768 "?"
 *   insn=0x00000000004EE768 string=0x00000000004EE76C "k"
 *   insn=0x00000000004EE770 string=0x00000000004EE774 ")$@9?"
 *   insn=0x00000000004EE774 string=0x00000000004EE778 "?"
 *   insn=0x00000000004EE784 string=0x00000000004EE788 "h\n@"
 *   insn=0x00000000004EE79C string=0x00000000004EE7A0 "h^@"
 *   insn=0x00000000004EE7A0 string=0x00000000004EE7A4 ")"
 *   insn=0x00000000004EE7A8 string=0x00000000004EE7AC "j"
 *   insn=0x00000000004EE7AC string=0x00000000004EE7B0 "i"@"
 *   insn=0x00000000004EE7AC string=0x00000000004EE818 "i"Ki\n"
 *   insn=0x00000000004EE7BC string=0x00000000004EE7C0 "i"
 *   insn=0x00000000004EE7BC string=0x00000000004EE7F0 "hZ@"
 *   insn=0x00000000004EE7C0 string=0x00000000004EE7C4 "j*@"
 *   insn=0x00000000004EE7C4 string=0x00000000004EE7C8 ")"
 *   insn=0x00000000004EE7CC string=0x00000000004EE7D0 ")"
 *   insn=0x00000000004EE7D0 string=0x00000000004EE7D4 "jf"
 *   insn=0x00000000004EE7D4 string=0x00000000004EE7D8 ")}\n?"
 *   insn=0x00000000004EE7D8 string=0x00000000004EE7DC "?"
 *   insn=0x00000000004EE7F4 string=0x00000000004EE7F8 ")u"
 *   insn=0x00000000004EE7F8 string=0x00000000004EE7FC "?"
 *   insn=0x00000000004EE818 string=0x00000000004EE81C "\n"
 *   insn=0x00000000004EE81C string=0x00000000004EE820 "}\n"
 *   insn=0x00000000004EE820 string=0x00000000004EE824 ""
 *   insn=0x00000000004EE834 string=0x00000000004EE838 "h"@"
 *   insn=0x00000000004EE83C string=0x00000000004EE840 "\t%@9)"
 *   insn=0x00000000004EE83C string=0x00000000004EE84C "hN@"
 *   insn=0x00000000004EE840 string=0x00000000004EE844 ")"
 *   insn=0x00000000004EE844 string=0x00000000004EE848 "\t%"
 *   insn=0x00000000004EE850 string=0x00000000004EE854 "k"
 *   insn=0x00000000004EE854 string=0x00000000004EE8A0 "hJ@"
 *   insn=0x00000000004EE85C string=0x00000000004EE860 "i\n@"
 *   insn=0x00000000004EE860 string=0x00000000004EE864 "*"
 *   insn=0x00000000004EE864 string=0x00000000004EE868 "J\t@"
 *   insn=0x00000000004EE868 string=0x00000000004EE86C "_"
 *   insn=0x00000000004EE86C string=0x00000000004EE870 ""
 *   insn=0x00000000004EE870 string=0x00000000004EE874 "!iu"
 *   insn=0x00000000004EE874 string=0x00000000004EE878 ")$@9?"
 *   insn=0x00000000004EE878 string=0x00000000004EE87C "?"
 *   insn=0x00000000004EE888 string=0x00000000004EE88C "hN@"
 *   insn=0x00000000004EE898 string=0x00000000004EE89C "+"
 *   insn=0x00000000004EE8A8 string=0x00000000004EE8D8 "hZ@"
 *   insn=0x00000000004EE8AC string=0x00000000004EE8B0 "j"
 *   insn=0x00000000004EE8B0 string=0x00000000004EE8B4 "Jyi"
 *   insn=0x00000000004EE8B8 string=0x00000000004EE8BC "H%@9"
 *   insn=0x00000000004EE8B8 string=0x00000000004EE8CC ")"
 *   insn=0x00000000004EE8BC string=0x00000000004EE8C0 ""
 *   insn=0x00000000004EE8C0 string=0x00000000004EE8C4 "H%"
 *   insn=0x00000000004EE8C4 string=0x00000000004EE8C8 "hJ@"
 *   insn=0x00000000004EE8CC string=0x00000000004EE8D0 "?"
 *   insn=0x00000000004EE8E0 string=0x00000000004EE918 "i^@"
 *   insn=0x00000000004EE8E4 string=0x00000000004EE8E8 "i"
 *   insn=0x00000000004EE8E8 string=0x00000000004EE8EC "!yu"
 *   insn=0x00000000004EE8F0 string=0x00000000004EE8F4 ")$@9?"
 *   insn=0x00000000004EE8F4 string=0x00000000004EE8F8 "?"
 *   insn=0x00000000004EE904 string=0x00000000004EE908 "hZ@"
 *   insn=0x00000000004EE918 string=0x00000000004EE91C "?"
 *   insn=0x00000000004EE91C string=0x00000000004EE920 "m"
 *   insn=0x00000000004EE920 string=0x00000000004EEB0C "+}@"
 *   insn=0x00000000004EE928 string=0x00000000004EE92C "k"
 *   insn=0x00000000004EE92C string=0x00000000004EE930 "kih"
 *   insn=0x00000000004EE934 string=0x00000000004EE938 "i%@9)"
 *   insn=0x00000000004EE934 string=0x00000000004EE948 "J"
 *   insn=0x00000000004EE938 string=0x00000000004EE93C ")"
 *   insn=0x00000000004EE93C string=0x00000000004EE940 "i%"
 *   insn=0x00000000004EE940 string=0x00000000004EE944 "i^@"
 *   insn=0x00000000004EE948 string=0x00000000004EE94C "+}@"
 *   insn=0x00000000004EE94C string=0x00000000004EE950 "_"
 *   insn=0x00000000004EE950 string=0x00000000004EE954 "A"
 *   insn=0x00000000004EE958 string=0x00000000004EE95C "hZ@"
 *   insn=0x00000000004EE95C string=0x00000000004EE960 "l"
 *   insn=0x00000000004EE960 string=0x00000000004EEB10 "i*Iil6Ji("
 *   insn=0x00000000004EE968 string=0x00000000004EE96C "5"
 *   insn=0x00000000004EE974 string=0x00000000004EE978 "h"
 *   insn=0x00000000004EE978 string=0x00000000004EE97C ""
 *   insn=0x00000000004EE97C string=0x00000000004EE980 "\t"
 *   insn=0x00000000004EE980 string=0x00000000004EE984 "?"
 *   insn=0x00000000004EE98C string=0x00000000004EE990 "($@9"
 *   insn=0x00000000004EE994 string=0x00000000004EE998 "`"
 *   insn=0x00000000004EE99C string=0x00000000004EE9A0 "q"
 *   insn=0x00000000004EE9A8 string=0x00000000004EE9AC "a"
 *   insn=0x00000000004EE9B4 string=0x00000000004EE9B8 "\n"
 *   insn=0x00000000004EE9B8 string=0x00000000004EE9BC "y"
 *   insn=0x00000000004EE9BC string=0x00000000004EE9C0 "7!"
 *   insn=0x00000000004EE9C4 string=0x00000000004EE9C8 "{"
 *   insn=0x00000000004EE9C8 string=0x00000000004EE9CC "z"
 *   insn=0x00000000004EE9CC string=0x00000000004EE9D0 "H"
 *   insn=0x00000000004EE9D0 string=0x00000000004EE9D4 ""
 *   insn=0x00000000004EE9D4 string=0x00000000004EE9D8 "v"
 *   insn=0x00000000004EE9D4 string=0x00000000004EEA34 "H"
 *   insn=0x00000000004EE9D8 string=0x00000000004EE9DC "h"
 *   insn=0x00000000004EE9DC string=0x00000000004EE9E0 "\t"
 *   insn=0x00000000004EE9E0 string=0x00000000004EE9E4 "?"
 *   insn=0x00000000004EE9EC string=0x00000000004EE9F0 "($@9"
 *   insn=0x00000000004EE9F4 string=0x00000000004EE9F8 "`"
 *   insn=0x00000000004EE9FC string=0x00000000004EEA00 "Y"
 *   insn=0x00000000004EEA04 string=0x00000000004EEA08 "H"
 *   insn=0x00000000004EEA10 string=0x00000000004EEA14 "h"
 *   insn=0x00000000004EEA18 string=0x00000000004EEA1C "($@9"
 *   insn=0x00000000004EEA28 string=0x00000000004EEA2C "N"
 *   insn=0x00000000004EEA38 string=0x00000000004EEA3C "K"
 *   insn=0x00000000004EEA3C string=0x00000000004EEA40 "Y"
 *   insn=0x00000000004EEA54 string=0x00000000004EEA64 "h:"
 *   insn=0x00000000004EEA58 string=0x00000000004EEA5C "y"
 *   insn=0x00000000004EEA5C string=0x00000000004EEA60 "h&"
 *   insn=0x00000000004EEA64 string=0x00000000004EEA68 "i.@9"
 *   insn=0x00000000004EEA6C string=0x00000000004EEA70 "\n"
 *   insn=0x00000000004EEA70 string=0x00000000004EEA74 ""
 *   insn=0x00000000004EEA74 string=0x00000000004EEA78 "i!"
 *   insn=0x00000000004EEA78 string=0x00000000004EEA7C "(!*"
 *   insn=0x00000000004EEA80 string=0x00000000004EEA84 ","
 *   insn=0x00000000004EEA88 string=0x00000000004EEA8C "($@9"
 *   insn=0x00000000004EEA90 string=0x00000000004EEA94 "`"
 *   insn=0x00000000004EEA94 string=0x00000000004EEAA0 "h.@9"
 *   insn=0x00000000004EEA98 string=0x00000000004EEA9C "2"
 *   insn=0x00000000004EEAA8 string=0x00000000004EEAAC "v"
 *   insn=0x00000000004EEAB0 string=0x00000000004EEAB4 ")$@9?"
 *   insn=0x00000000004EEAB4 string=0x00000000004EEAB8 "?"
 *   insn=0x00000000004EEAC0 string=0x00000000004EEAC4 "("
 *   insn=0x00000000004EEAC4 string=0x00000000004EEAC8 "h.@9"
 *   insn=0x00000000004EEACC string=0x00000000004EEAD0 "\t"
 *   insn=0x00000000004EEADC string=0x00000000004EEAE0 "m.@9"
 *   insn=0x00000000004EEAF4 string=0x00000000004EEAF8 "H"
 *   insn=0x00000000004EEB00 string=0x00000000004EEB04 "@%"
 *   insn=0x00000000004EEB04 string=0x00000000004EEB08 ""
 *   insn=0x00000000004EEB10 string=0x00000000004EEB14 "l6Ji("
 *   insn=0x00000000004EEB14 string=0x00000000004EEB18 "("
 *   insn=0x00000000004EEB1C string=0x00000000004EEB20 "j"
 *   insn=0x00000000004EEB20 string=0x00000000004EEB24 ")"
 *   insn=0x00000000004EEB24 string=0x00000000004EEB28 ")"
 *   insn=0x00000000004EEB28 string=0x00000000004EEB2C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EE534(_QWORD *a1)
{
  __int64 v2; // x19
  __int64 result; // x0
  int v4; // w8
  __int64 v5; // x8
  __int64 v6; // x0
  const char *v7; // x22
  char *v8; // x21
  char *v9; // x0
  _BOOL4 v10; // w22
  int v11; // w21
  __int64 v12; // x1
  unsigned __int8 v13; // w8
  unsigned __int64 v14; // x21
  int *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x9
  __int64 v18; // x1
  unsigned __int64 v19; // x9
  unsigned __int64 v20; // x10
  unsigned __int64 v21; // x8
  unsigned __int64 v22; // x21
  unsigned __int64 v23; // x11
  unsigned __int64 j; // x22
  int v25; // w8
  unsigned __int64 v26; // x20
  int v27; // w8
  __int64 v28; // x8
  int v29; // w8
  __int64 v30; // x21
  __int64 k; // x22
  __int64 v32; // x9
  __int64 v33; // x1
  int v34; // w8
  __int64 m; // x9
  __int64 v36; // x10
  int v37; // w8
  __int64 n; // x21
  __int64 v39; // x1
  int v40; // w9
  __int64 v41; // x8
  __int64 ii; // x10
  __int64 v43; // x11
  __int64 v44; // x11
  __int64 v45; // x23
  __int64 v46; // x8
  __int64 v47; // x1
  int v48; // w23
  __int64 v49; // x24
  __int64 v50; // x27
  __int64 v51; // x26
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  unsigned __int8 v55; // w8
  unsigned __int64 i; // x21
  __int64 v57; // x1
  __int64 v58; // x8
  __int64 v59; // x9

  v2 = a1[7];
  result = 0;
  v4 = *(unsigned __int8 *)(v2 + 8) - 5;
  *(_BYTE *)(v2 + 9) |= 4u;
  switch ( v4 )
  {
    case 0:
      a1[7] = *(_QWORD *)(v2 + 48);
      v5 = *(_QWORD *)(v2 + 16);
      if ( v5
        && ((*(_BYTE *)(v5 + 9) & 3) == 0
         || (sub_4EE364((__int64)a1, *(_QWORD *)(v2 + 16)), (v5 = *(_QWORD *)(v2 + 16)) != 0))
        && (*(_BYTE *)(v5 + 10) & 8) == 0
        && (v6 = sub_4F4E8C(v5, 3, a1[40])) != 0
        && *(_DWORD *)(v6 + 8) == 4 )
      {
        v7 = (const char *)(*(_QWORD *)v6 + 24LL);
        v8 = strchr(v7, 107);
        v9 = strchr(v7, 118);
        v10 = v8 != 0;
        if ( (unsigned __int64)v8 | (unsigned __int64)v9 )
        {
          *(_BYTE *)(v2 + 9) = (8 * v10) & 0xEF | (16 * (v9 != 0)) | *(_BYTE *)(v2 + 9) & 0xE7;
          *(_QWORD *)(v2 + 48) = a1[9];
          a1[9] = v2;
        }
        if ( v8 && v9 )
        {
LABEL_94:
          *(_BYTE *)(v2 + 9) &= ~4u;
          return 16LL * *(int *)(v2 + 56) + 40LL * (1 << *(_BYTE *)(v2 + 11)) + 64;
        }
        if ( v9 )
        {
          v11 = 1;
          goto LABEL_80;
        }
      }
      else
      {
        v10 = 0;
      }
      v11 = *(_DWORD *)(v2 + 56);
      if ( v11 )
      {
        v45 = 16LL * v11;
        do
        {
          v46 = *(_QWORD *)(v2 + 24) + v45;
          if ( *(int *)(v46 - 8) >= 4 )
          {
            v47 = *(_QWORD *)(v46 - 16);
            if ( (*(_BYTE *)(v47 + 9) & 3) != 0 )
              sub_4EE364((__int64)a1, v47);
          }
          --v11;
          v45 -= 16;
        }
        while ( v11 );
      }
LABEL_80:
      v48 = 1 << *(_BYTE *)(v2 + 11);
      v49 = 40LL * v48;
      do
      {
        v50 = *(_QWORD *)(v2 + 32);
        v51 = v50 + v49;
        if ( *(_DWORD *)(v50 + v49 - 32) )
        {
          if ( !v10 && *(int *)(v50 + v49 - 16) >= 4 )
          {
            v52 = *(_QWORD *)(v50 + v49 - 24);
            if ( (*(_BYTE *)(v52 + 9) & 3) != 0 )
              sub_4EE364((__int64)a1, v52);
          }
          if ( (v11 & 1) == 0 && *(int *)(v51 - 32) >= 4 )
          {
            v53 = *(_QWORD *)(v50 + v49 - 40);
            if ( (*(_BYTE *)(v53 + 9) & 3) != 0 )
              sub_4EE364((__int64)a1, v53);
          }
        }
        else if ( *(int *)(v51 - 16) >= 4 )
        {
          *(_DWORD *)(v51 - 16) = 11;
        }
        --v48;
        v49 -= 40;
      }
      while ( v48 );
      if ( !(v11 | v10) )
        return 16LL * *(int *)(v2 + 56) + 40LL * (1 << *(_BYTE *)(v2 + 11)) + 64;
      goto LABEL_94;
    case 1:
      a1[7] = *(_QWORD *)(v2 + 16);
      v12 = *(_QWORD *)(v2 + 24);
      if ( (*(_BYTE *)(v12 + 9) & 3) != 0 )
        sub_4EE364((__int64)a1, v12);
      if ( *(_BYTE *)(v2 + 10) )
      {
        v13 = *(_BYTE *)(v2 + 11);
        if ( v13 )
        {
          v14 = 0;
          v15 = (int *)(v2 + 48);
          do
          {
            if ( *v15 >= 4 )
            {
              v16 = *((_QWORD *)v15 - 1);
              if ( (*(_BYTE *)(v16 + 9) & 3) != 0 )
              {
                sub_4EE364((__int64)a1, v16);
                v13 = *(_BYTE *)(v2 + 11);
              }
            }
            ++v14;
            v15 += 4;
          }
          while ( v14 < v13 );
        }
      }
      else
      {
        v54 = *(_QWORD *)(v2 + 32);
        if ( (*(_BYTE *)(v54 + 9) & 3) != 0 )
          sub_4EE364((__int64)a1, v54);
        v55 = *(_BYTE *)(v2 + 11);
        if ( v55 )
        {
          for ( i = 0; i < v55; ++i )
          {
            v57 = *(_QWORD *)(v2 + 40 + 8 * i);
            if ( (*(_BYTE *)(v57 + 9) & 3) != 0 )
            {
              sub_4EE364((__int64)a1, v57);
              v55 = *(_BYTE *)(v2 + 11);
            }
          }
        }
      }
      if ( *(_BYTE *)(v2 + 10) )
        v58 = 16;
      else
        v58 = 8;
      if ( *(_BYTE *)(v2 + 10) )
        v59 = 56;
      else
        v59 = 48;
      return v59 + (*(unsigned __int8 *)(v2 + 11) - 1LL) * v58;
    case 3:
      v17 = a1[8];
      a1[7] = *(_QWORD *)(v2 + 160);
      *(_QWORD *)(v2 + 160) = v17;
      a1[8] = v2;
      LODWORD(v17) = *(_DWORD *)(v2 + 128);
      *(_BYTE *)(v2 + 9) &= ~4u;
      if ( (int)v17 >= 4 )
      {
        v18 = *(_QWORD *)(v2 + 120);
        if ( (*(_BYTE *)(v18 + 9) & 3) != 0 )
          sub_4EE364((__int64)a1, v18);
      }
      v19 = *(_QWORD *)(v2 + 80);
      v20 = *(_QWORD *)(v2 + 40);
      v21 = *(_QWORD *)(v2 + 16);
      v22 = v21;
      if ( v19 <= v20 )
      {
        v22 = *(_QWORD *)(v2 + 16);
        do
        {
          v23 = *(_QWORD *)(v19 + 16);
          v19 += 40LL;
          if ( v22 < v23 )
            v22 = v23;
        }
        while ( v19 <= v20 );
      }
      for ( j = *(_QWORD *)(v2 + 64); j < v21; j += 16LL )
      {
        if ( *(int *)(j + 8) >= 4 && (*(_BYTE *)(*(_QWORD *)j + 9LL) & 3) != 0 )
        {
          sub_4EE364((__int64)a1, *(_QWORD *)j);
          v21 = *(_QWORD *)(v2 + 16);
        }
      }
      while ( j <= v22 )
      {
        *(_DWORD *)(j + 8) = 0;
        j += 16LL;
      }
      v25 = *(_DWORD *)(v2 + 92);
      if ( v25 < 20001 )
      {
        v26 = v22 - *(_QWORD *)(v2 + 64);
        if ( v25 >= 17 && (int)(858993460 * ((*(_QWORD *)(v2 + 40) - *(_QWORD *)(v2 + 80)) >> 3)) < v25 )
          sub_4EBB2C(v2, (unsigned int)v25 >> 1);
        v27 = *(_DWORD *)(v2 + 88);
        if ( (int)((v26 >> 2) & 0xFFFFFFFC) < v27 && v27 >= 91 )
          sub_4EBA24(v2, (unsigned int)v27 >> 1);
      }
      return 40LL * *(int *)(v2 + 92) + 16LL * *(int *)(v2 + 88) + 184;
    case 4:
      a1[7] = *(_QWORD *)(v2 + 104);
      v28 = *(_QWORD *)(v2 + 64);
      if ( v28 )
        *(_BYTE *)(v28 + 9) &= 0xFCu;
      v29 = *(_DWORD *)(v2 + 76);
      if ( v29 >= 1 )
      {
        v30 = 0;
        for ( k = 0; k < v29; ++k )
        {
          v32 = *(_QWORD *)(v2 + 16);
          if ( *(int *)(v32 + v30 + 8) >= 4 )
          {
            v33 = *(_QWORD *)(v32 + v30);
            if ( (*(_BYTE *)(v33 + 9) & 3) != 0 )
            {
              sub_4EE364((__int64)a1, v33);
              v29 = *(_DWORD *)(v2 + 76);
            }
          }
          v30 += 16;
        }
      }
      v34 = *(_DWORD *)(v2 + 72);
      if ( v34 >= 1 )
      {
        for ( m = 0; m < v34; ++m )
        {
          v36 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 8 * m);
          if ( v36 )
          {
            *(_BYTE *)(v36 + 9) &= 0xFCu;
            v34 = *(_DWORD *)(v2 + 72);
          }
        }
      }
      v37 = *(_DWORD *)(v2 + 88);
      if ( v37 >= 1 )
      {
        for ( n = 0; n < v37; ++n )
        {
          v39 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * n);
          if ( v39 && (*(_BYTE *)(v39 + 9) & 3) != 0 )
          {
            sub_4EE364((__int64)a1, v39);
            v37 = *(_DWORD *)(v2 + 88);
          }
        }
      }
      v40 = *(_DWORD *)(v2 + 92);
      if ( v40 <= 0 )
      {
        v44 = v40;
      }
      else
      {
        v41 = 0;
        for ( ii = 0; ii < v40; ++ii )
        {
          v43 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + v41);
          if ( v43 )
          {
            *(_BYTE *)(v43 + 9) &= 0xFCu;
            v40 = *(_DWORD *)(v2 + 92);
          }
          v44 = v40;
          v41 += 16;
        }
        v37 = *(_DWORD *)(v2 + 88);
      }
      return 4 * (*(int *)(v2 + 84) + (__int64)*(int *)(v2 + 80))
           + 16 * (v44 + *(int *)(v2 + 76))
           + 8 * (*(int *)(v2 + 72) + (__int64)v37)
           + 120;
    default:
      return result;
  }
}

