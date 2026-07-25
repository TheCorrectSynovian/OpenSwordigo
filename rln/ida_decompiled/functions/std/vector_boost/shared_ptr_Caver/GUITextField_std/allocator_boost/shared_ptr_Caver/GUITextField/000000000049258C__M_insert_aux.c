/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049258C
 * Mangled: _ZNSt6vectorIN5boost10shared_ptrIN5Caver12GUITextFieldEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUITextField>*,std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>>,boost::shared_ptr<Caver::GUITextField> const&)
 *
 * Callers: 1
 *   0x00000000001FA940  std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUITextField>*,std::vector<boost::shared_ptr<Caver::GUITextField>,std::allocator<boost::shared_ptr<Caver::GUITextField>>>>,boost::shared_ptr<Caver::GUITextField> const&)
 *
 * Callees: 12
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7040  .__cxa_guard_release
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FB6F0  .__cxa_guard_abort
 *   0x00000000001FBC40  .memset
 *   0x00000000001FD6E0  .__cxa_guard_acquire
 *   0x00000000002016F0  std::_Deque_base<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_initialize_map(ulong)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000492DEC  Caver::GUIApplication::~GUIApplication()
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 214
 *   insn=0x00000000004925B0 string=0x00000000004925B4 "?"
 *   insn=0x00000000004925BC string=0x00000000004925C0 "_"
 *   insn=0x00000000004925C0 string=0x00000000004925C4 "*"
 *   insn=0x00000000004925C4 string=0x00000000004925C8 "+)"
 *   insn=0x00000000004925CC string=0x00000000004925D0 "K"
 *   insn=0x00000000004925CC string=0x00000000004925DC ")A"
 *   insn=0x00000000004925D0 string=0x00000000004925D4 "k"
 *   insn=0x00000000004925D4 string=0x00000000004925D8 "K"
 *   insn=0x00000000004925E8 string=0x00000000004925F8 "\t"
 *   insn=0x00000000004925EC string=0x00000000004925F0 ")"
 *   insn=0x00000000004925F8 string=0x00000000004925FC "?"
 *   insn=0x00000000004925FC string=0x0000000000492600 "+"
 *   insn=0x0000000000492600 string=0x0000000000492604 ")"
 *   insn=0x0000000000492604 string=0x0000000000492608 "7"
 *   insn=0x000000000049260C string=0x0000000000492610 "\t"
 *   insn=0x0000000000492610 string=0x0000000000492614 "\n@"
 *   insn=0x0000000000492618 string=0x000000000049261C "K"
 *   insn=0x000000000049261C string=0x0000000000492620 "k"
 *   insn=0x0000000000492620 string=0x0000000000492624 "K"
 *   insn=0x0000000000492628 string=0x000000000049262C "\t)"
 *   insn=0x000000000049262C string=0x0000000000492630 "5"
 *   insn=0x0000000000492634 string=0x0000000000492638 ""
 *   insn=0x0000000000492644 string=0x0000000000492648 "\t@"
 *   insn=0x0000000000492654 string=0x0000000000492658 ""
 *   insn=0x0000000000492664 string=0x0000000000492668 "@"
 *   insn=0x0000000000492684 string=0x0000000000492694 "u"
 *   insn=0x0000000000492688 string=0x000000000049268C ""
 *   insn=0x0000000000492694 string=0x0000000000492698 "vR"
 *   insn=0x0000000000492698 string=0x000000000049269C "5"
 *   insn=0x000000000049269C string=0x00000000004926E0 "t"
 *   insn=0x00000000004926A0 string=0x00000000004926A4 ""
 *   insn=0x00000000004926B0 string=0x00000000004926B4 "\t@"
 *   insn=0x00000000004926C0 string=0x00000000004926C4 ""
 *   insn=0x00000000004926D0 string=0x00000000004926D4 "@"
 *   insn=0x00000000004926E4 string=0x00000000004926E8 ""
 *   insn=0x00000000004926F8 string=0x00000000004926FC "\t@"
 *   insn=0x0000000000492704 string=0x0000000000492708 ""
 *   insn=0x0000000000492730 string=0x0000000000492734 " "
 *   insn=0x0000000000492738 string=0x000000000049273C "("
 *   insn=0x000000000049273C string=0x0000000000492740 ""
 *   insn=0x0000000000492740 string=0x0000000000492744 "\t"
 *   insn=0x0000000000492744 string=0x0000000000492748 "("
 *   insn=0x0000000000492748 string=0x000000000049274C "\n"
 *   insn=0x0000000000492750 string=0x0000000000492754 "_"
 *   insn=0x0000000000492758 string=0x000000000049275C ")"
 *   insn=0x000000000049275C string=0x0000000000492760 "?"
 *   insn=0x0000000000492764 string=0x0000000000492768 "7"
 *   insn=0x0000000000492774 string=0x0000000000492904 "dJ"
 *   insn=0x000000000049277C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000049278C string=0x0000000000492790 "i"
 *   insn=0x0000000000492790 string=0x0000000000492794 ")"
 *   insn=0x0000000000492798 string=0x000000000049279C "("
 *   insn=0x00000000004927A0 string=0x00000000004927A4 "("
 *   insn=0x00000000004927A8 string=0x00000000004927AC "\t"
 *   insn=0x00000000004927AC string=0x00000000004927B0 ")"
 *   insn=0x00000000004927B0 string=0x00000000004927B4 "\t"
 *   insn=0x00000000004927C8 string=0x00000000004927CC "hB"
 *   insn=0x00000000004927D0 string=0x00000000004927D4 "K"
 *   insn=0x00000000004927DC string=0x00000000004927E0 "K"
 *   insn=0x00000000004927E8 string=0x00000000004927EC "l"
 *   insn=0x00000000004927E8 string=0x00000000004927F8 "JA"
 *   insn=0x00000000004927F0 string=0x00000000004927F4 "l"
 *   insn=0x00000000004927F8 string=0x00000000004927FC "_"
 *   insn=0x00000000004927FC string=0x0000000000492800 ")A"
 *   insn=0x0000000000492800 string=0x0000000000492804 "a"
 *   insn=0x0000000000492804 string=0x0000000000492808 ""
 *   insn=0x0000000000492808 string=0x000000000049280C ""
 *   insn=0x0000000000492810 string=0x0000000000492814 "A"
 *   insn=0x000000000049281C string=0x0000000000492820 "?"
 *   insn=0x0000000000492824 string=0x0000000000492828 "(C"
 *   insn=0x0000000000492830 string=0x0000000000492834 "K"
 *   insn=0x0000000000492834 string=0x0000000000492838 "+"
 *   insn=0x0000000000492838 string=0x000000000049283C "K"
 *   insn=0x000000000049283C string=0x0000000000492840 "+"
 *   insn=0x0000000000492844 string=0x0000000000492848 "l"
 *   insn=0x0000000000492844 string=0x0000000000492854 "JA"
 *   insn=0x000000000049284C string=0x0000000000492850 "l"
 *   insn=0x0000000000492854 string=0x0000000000492858 "_"
 *   insn=0x0000000000492858 string=0x000000000049285C ")A"
 *   insn=0x0000000000492860 string=0x0000000000492864 ""
 *   insn=0x0000000000492864 string=0x0000000000492868 ""
 *   insn=0x0000000000492868 string=0x000000000049286C ""
 *   insn=0x0000000000492878 string=0x00000000004928D4 "v"
 *   insn=0x000000000049287C string=0x0000000000492880 "3"
 *   insn=0x0000000000492880 string=0x0000000000492884 "h"
 *   insn=0x0000000000492884 string=0x0000000000492888 ""
 *   insn=0x0000000000492888 string=0x000000000049288C "h"
 *   insn=0x0000000000492890 string=0x0000000000492894 "h"
 *   insn=0x0000000000492898 string=0x000000000049289C "\t@"
 *   insn=0x00000000004928A0 string=0x00000000004928A4 "h\n@"
 *   insn=0x00000000004928A4 string=0x00000000004928A8 ""
 *   insn=0x00000000004928A8 string=0x00000000004928AC "h\n"
 *   insn=0x00000000004928B0 string=0x00000000004928B4 "h"
 *   insn=0x00000000004928B8 string=0x00000000004928BC "@"
 *   insn=0x00000000004928C4 string=0x00000000004928C8 "?"
 *   insn=0x00000000004928D8 string=0x00000000004928DC "u"
 *   insn=0x00000000004928DC string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000492914 string=0x0000000000492918 "4"
 *   insn=0x000000000049291C string=0x0000000000492920 ""
 *   insn=0x000000000049292C string=0x0000000000492930 "\t@"
 *   insn=0x000000000049293C string=0x0000000000492940 ""
 *   insn=0x000000000049294C string=0x0000000000492950 "@"
 *   insn=0x0000000000492960 string=0x0000000000492964 "z"
 *   insn=0x000000000049298C string=0x0000000000492990 "?"
 *   insn=0x0000000000492998 string=0x000000000049299C "_"
 *   insn=0x000000000049299C string=0x00000000004929A0 "*"
 *   insn=0x00000000004929A0 string=0x00000000004929A4 "+)"
 *   insn=0x00000000004929A8 string=0x00000000004929AC "K"
 *   insn=0x00000000004929A8 string=0x00000000004929B8 ")A"
 *   insn=0x00000000004929AC string=0x00000000004929B0 "k"
 *   insn=0x00000000004929B0 string=0x00000000004929B4 "K"
 *   insn=0x00000000004929C4 string=0x00000000004929D4 "\t"
 *   insn=0x00000000004929C8 string=0x00000000004929CC ")"
 *   insn=0x00000000004929D4 string=0x00000000004929D8 "?"
 *   insn=0x00000000004929D8 string=0x00000000004929DC "+"
 *   insn=0x00000000004929DC string=0x00000000004929E0 ")"
 *   insn=0x00000000004929E0 string=0x00000000004929E4 "7"
 *   insn=0x00000000004929E8 string=0x00000000004929EC "\t"
 *   insn=0x00000000004929EC string=0x00000000004929F0 "\n@"
 *   insn=0x00000000004929F4 string=0x00000000004929F8 "K"
 *   insn=0x00000000004929F8 string=0x00000000004929FC "k"
 *   insn=0x00000000004929FC string=0x0000000000492A00 "K"
 *   insn=0x0000000000492A04 string=0x0000000000492A08 "\t)"
 *   insn=0x0000000000492A08 string=0x0000000000492A0C "5"
 *   insn=0x0000000000492A10 string=0x0000000000492A14 ""
 *   insn=0x0000000000492A20 string=0x0000000000492A24 "\t@"
 *   insn=0x0000000000492A30 string=0x0000000000492A34 ""
 *   insn=0x0000000000492A40 string=0x0000000000492A44 "@"
 *   insn=0x0000000000492A60 string=0x0000000000492A70 "u"
 *   insn=0x0000000000492A64 string=0x0000000000492A68 ""
 *   insn=0x0000000000492A70 string=0x0000000000492A74 "vR"
 *   insn=0x0000000000492A74 string=0x0000000000492A78 "5"
 *   insn=0x0000000000492A78 string=0x0000000000492ABC "t"
 *   insn=0x0000000000492A7C string=0x0000000000492A80 ""
 *   insn=0x0000000000492A8C string=0x0000000000492A90 "\t@"
 *   insn=0x0000000000492A9C string=0x0000000000492AA0 ""
 *   insn=0x0000000000492AAC string=0x0000000000492AB0 "@"
 *   insn=0x0000000000492AC0 string=0x0000000000492AC4 ""
 *   insn=0x0000000000492AD4 string=0x0000000000492AD8 "\t@"
 *   insn=0x0000000000492AE0 string=0x0000000000492AE4 ""
 *   insn=0x0000000000492B0C string=0x0000000000492B10 " "
 *   insn=0x0000000000492B14 string=0x0000000000492B18 "("
 *   insn=0x0000000000492B18 string=0x0000000000492B1C ""
 *   insn=0x0000000000492B1C string=0x0000000000492B20 "\t"
 *   insn=0x0000000000492B20 string=0x0000000000492B24 "("
 *   insn=0x0000000000492B24 string=0x0000000000492B28 "\n"
 *   insn=0x0000000000492B2C string=0x0000000000492B30 "_"
 *   insn=0x0000000000492B34 string=0x0000000000492B38 ")"
 *   insn=0x0000000000492B38 string=0x0000000000492B3C "?"
 *   insn=0x0000000000492B40 string=0x0000000000492B44 "7"
 *   insn=0x0000000000492B50 string=0x0000000000492CE0 "mI"
 *   insn=0x0000000000492B68 string=0x0000000000492B6C "i"
 *   insn=0x0000000000492B6C string=0x0000000000492B70 ")"
 *   insn=0x0000000000492B74 string=0x0000000000492B78 "("
 *   insn=0x0000000000492B7C string=0x0000000000492B80 "("
 *   insn=0x0000000000492B84 string=0x0000000000492B88 "\t"
 *   insn=0x0000000000492B88 string=0x0000000000492B8C ")"
 *   insn=0x0000000000492B8C string=0x0000000000492B90 "\t"
 *   insn=0x0000000000492BA4 string=0x0000000000492BA8 "hB"
 *   insn=0x0000000000492BAC string=0x0000000000492BB0 "K"
 *   insn=0x0000000000492BB8 string=0x0000000000492BBC "K"
 *   insn=0x0000000000492BC4 string=0x0000000000492BC8 "l"
 *   insn=0x0000000000492BC4 string=0x0000000000492BD4 "JA"
 *   insn=0x0000000000492BCC string=0x0000000000492BD0 "l"
 *   insn=0x0000000000492BD4 string=0x0000000000492BD8 "_"
 *   insn=0x0000000000492BD8 string=0x0000000000492BDC ")A"
 *   insn=0x0000000000492BDC string=0x0000000000492BE0 "a"
 *   insn=0x0000000000492BE0 string=0x0000000000492BE4 ""
 *   insn=0x0000000000492BE4 string=0x0000000000492BE8 ""
 *   insn=0x0000000000492BEC string=0x0000000000492BF0 "A"
 *   insn=0x0000000000492BF8 string=0x0000000000492BFC "?"
 *   insn=0x0000000000492C00 string=0x0000000000492C04 "(C"
 *   insn=0x0000000000492C0C string=0x0000000000492C10 "K"
 *   insn=0x0000000000492C10 string=0x0000000000492C14 "+"
 *   insn=0x0000000000492C14 string=0x0000000000492C18 "K"
 *   insn=0x0000000000492C18 string=0x0000000000492C1C "+"
 *   insn=0x0000000000492C20 string=0x0000000000492C24 "l"
 *   insn=0x0000000000492C20 string=0x0000000000492C30 "JA"
 *   insn=0x0000000000492C28 string=0x0000000000492C2C "l"
 *   insn=0x0000000000492C30 string=0x0000000000492C34 "_"
 *   insn=0x0000000000492C34 string=0x0000000000492C38 ")A"
 *   insn=0x0000000000492C3C string=0x0000000000492C40 ""
 *   insn=0x0000000000492C40 string=0x0000000000492C44 ""
 *   insn=0x0000000000492C44 string=0x0000000000492C48 ""
 *   insn=0x0000000000492C54 string=0x0000000000492CB0 "v"
 *   insn=0x0000000000492C58 string=0x0000000000492C5C "3"
 *   insn=0x0000000000492C5C string=0x0000000000492C60 "h"
 *   insn=0x0000000000492C60 string=0x0000000000492C64 ""
 *   insn=0x0000000000492C64 string=0x0000000000492C68 "h"
 *   insn=0x0000000000492C6C string=0x0000000000492C70 "h"
 *   insn=0x0000000000492C74 string=0x0000000000492C78 "\t@"
 *   insn=0x0000000000492C7C string=0x0000000000492C80 "h\n@"
 *   insn=0x0000000000492C80 string=0x0000000000492C84 ""
 *   insn=0x0000000000492C84 string=0x0000000000492C88 "h\n"
 *   insn=0x0000000000492C8C string=0x0000000000492C90 "h"
 *   insn=0x0000000000492C94 string=0x0000000000492C98 "@"
 *   insn=0x0000000000492CA0 string=0x0000000000492CA4 "?"
 *   insn=0x0000000000492CB4 string=0x0000000000492CB8 "~"
 *   insn=0x0000000000492CF0 string=0x0000000000492CF4 "4"
 *   insn=0x0000000000492CF8 string=0x0000000000492CFC ""
 *   insn=0x0000000000492D08 string=0x0000000000492D0C "\t@"
 *   insn=0x0000000000492D18 string=0x0000000000492D1C ""
 *   insn=0x0000000000492D28 string=0x0000000000492D2C "@"
 *   insn=0x0000000000492D50 string=0x0000000000492D58 ""
 *   insn=0x0000000000492D74 string=0x0000000000492D7C "Y"
 *   insn=0x0000000000492D7C string=0x00000000001FD6E0 "0'"
 *   insn=0x0000000000492D98 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000492DA0 string=0x0000000000492DA4 "S"
 *   insn=0x0000000000492DB4 string=0x0000000000492DB8 "!"
 *   insn=0x0000000000492DB8 string=0x0000000000492DBC "B"
 *   insn=0x0000000000492DC0 string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000492DCC string=0x00000000001F7040 "0'"
 *   insn=0x0000000000492DD8 string=0x0000000000492DE0 "D"
 *   insn=0x0000000000492DE0 string=0x00000000001FB6F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<boost::shared_ptr<Caver::GUITextField>>::_M_insert_aux(__int64 *a1, char *a2, _QWORD *a3)
{
  _QWORD *v4; // x9
  char *v7; // x8
  __int64 v8; // x10
  _QWORD *v9; // x20
  __int64 v10; // x22
  __int64 v11; // x23
  char *v12; // x24
  __int64 v13; // x9
  __int64 v14; // t1
  __int64 v15; // x10
  _QWORD *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x21
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  char *v24; // x24
  __int64 v25; // x8
  __int64 v26; // x9
  bool v27; // cf
  unsigned __int64 v28; // x8
  int v29; // w9
  unsigned __int64 v30; // x23
  __int64 v31; // x21
  _QWORD *v32; // x9
  __int64 v33; // x8
  char *v34; // x22
  unsigned __int64 v35; // x8
  __int64 v36; // x9
  _QWORD *v37; // x12
  __int64 v38; // x11
  __int64 v39; // x10
  char *v40; // x25
  unsigned __int64 v41; // x24
  _QWORD *v42; // x9
  char *v43; // x10
  __int64 v44; // x11
  _QWORD *v45; // x19
  __int64 v46; // x8
  __int64 v47; // x8

  v4 = (_QWORD *)a1[1];
  if ( v4 == (_QWORD *)a1[2] )
  {
    v24 = (char *)*a1;
    v25 = ((__int64)v4 - *a1) >> 4;
    if ( v4 == (_QWORD *)*a1 )
      v26 = 1;
    else
      v26 = ((__int64)v4 - *a1) >> 4;
    v27 = __CFADD__(v26, v25);
    v28 = v26 + v25;
    v29 = v27;
    if ( v29 | (v28 >> 60 != 0) )
      v30 = 0xFFFFFFFFFFFFFFFLL;
    else
      v30 = v28;
    if ( v30 )
    {
      if ( v30 >> 60 )
        sub_565294(a1, a2, a3);
      v31 = operator new(16 * v30);
    }
    else
    {
      v31 = 0;
    }
    v32 = (_QWORD *)(v31 + 16 * ((a2 - v24) >> 4));
    *v32 = *a3;
    v33 = a3[1];
    v32[1] = v33;
    if ( v33 )
      ++*(_QWORD *)(v33 + 8);
    v34 = (char *)*a1;
    v35 = v31;
    if ( (char *)*a1 != a2 )
    {
      v36 = 0;
      do
      {
        v37 = (_QWORD *)(v31 + v36);
        *v37 = *(_QWORD *)&v34[v36];
        v38 = *(_QWORD *)&v34[v36 + 8];
        v37[1] = v38;
        if ( v38 )
          ++*(_QWORD *)(v38 + 8);
        v39 = (__int64)&v34[v36 + 16];
        v36 += 16;
      }
      while ( (char *)v39 != a2 );
      v35 = v31 + ((a2 - 16 - v34) & 0xFFFFFFFFFFFFFFF0LL) + 16;
    }
    v40 = (char *)a1[1];
    v41 = v35 + 16;
    if ( v40 != a2 )
    {
      v42 = (_QWORD *)(v35 + 16);
      v43 = a2;
      do
      {
        *v42 = *(_QWORD *)v43;
        v44 = *((_QWORD *)v43 + 1);
        v42[1] = v44;
        if ( v44 )
          ++*(_QWORD *)(v44 + 8);
        v43 += 16;
        v42 += 2;
      }
      while ( v43 != v40 );
      v41 += ((v40 - 16 - a2) & 0xFFFFFFFFFFFFFFF0LL) + 16;
    }
    if ( v34 != v40 )
    {
      do
      {
        v45 = (_QWORD *)*((_QWORD *)v34 + 1);
        if ( v45 )
        {
          v46 = v45[1] - 1LL;
          v45[1] = v46;
          if ( !v46 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v45 + 16LL))(v45);
            v47 = v45[2] - 1LL;
            v45[2] = v47;
            if ( !v47 )
              (*(void (__fastcall **)(_QWORD *))(*v45 + 24LL))(v45);
          }
        }
        v34 += 16;
      }
      while ( v40 != v34 );
      v34 = (char *)*a1;
    }
    if ( v34 )
      operator delete(v34);
    *a1 = v31;
    a1[1] = v41;
    a1[2] = v31 + 16 * v30;
  }
  else
  {
    v7 = (char *)(v4 - 2);
    v8 = *(v4 - 1);
    *v4 = *(v4 - 2);
    v4[1] = v8;
    if ( v8 )
      ++*(_QWORD *)(v8 + 8);
    a1[1] = (__int64)(v4 + 2);
    v10 = *a3;
    v9 = (_QWORD *)a3[1];
    if ( v9 )
      ++v9[1];
    if ( v7 - a2 >= 1 )
    {
      v11 = ((unsigned __int64)(v7 - a2) >> 4) + 1;
      v12 = (char *)(v4 - 2);
      do
      {
        v14 = *((_QWORD *)v12 - 2);
        v12 -= 16;
        v13 = v14;
        v15 = *((_QWORD *)v12 + 1);
        if ( v15 )
          ++*(_QWORD *)(v15 + 8);
        v16 = (_QWORD *)*((_QWORD *)v7 + 1);
        *(_QWORD *)v7 = v13;
        *((_QWORD *)v7 + 1) = v15;
        if ( v16 )
        {
          v17 = v16[1] - 1LL;
          v16[1] = v17;
          if ( !v17 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
            v18 = v16[2] - 1LL;
            v16[2] = v18;
            if ( !v18 )
              (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
          }
        }
        --v11;
        v7 = v12;
      }
      while ( v11 > 1 );
    }
    if ( v9 )
      ++v9[1];
    v19 = (_QWORD *)*((_QWORD *)a2 + 1);
    *(_QWORD *)a2 = v10;
    *((_QWORD *)a2 + 1) = v9;
    if ( v19 )
    {
      v20 = v19[1] - 1LL;
      v19[1] = v20;
      if ( !v20 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
        v21 = v19[2] - 1LL;
        v19[2] = v21;
        if ( !v21 )
          (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
      }
    }
    if ( v9 )
    {
      v22 = v9[1] - 1LL;
      v9[1] = v22;
      if ( !v22 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
        v23 = v9[2] - 1LL;
        v9[2] = v23;
        if ( !v23 )
          (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
      }
    }
  }
}

