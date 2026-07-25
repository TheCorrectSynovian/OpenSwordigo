/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000342864
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9GUISliderES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUISlider,Caver::GUISlider>(boost::shared_ptr<Caver::GUISlider> const*,Caver::GUISlider *)
 *
 * Callers: 1
 *   0x0000000000202690  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUISlider,Caver::GUISlider>(boost::shared_ptr<Caver::GUISlider> const*,Caver::GUISlider *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x0000000000342874 string=0x0000000000342878 "`"
 *   insn=0x0000000000342878 string=0x000000000034287C ""
 *   insn=0x0000000000342878 string=0x0000000000342884 "3"
 *   insn=0x000000000034287C string=0x0000000000342880 "h"
 *   insn=0x0000000000342888 string=0x000000000034288C "h"
 *   insn=0x000000000034288C string=0x0000000000342890 ""
 *   insn=0x0000000000342890 string=0x0000000000342894 "h"
 *   insn=0x00000000003428A4 string=0x00000000003428A8 "h\n@"
 *   insn=0x00000000003428A8 string=0x00000000003428AC ""
 *   insn=0x00000000003428AC string=0x00000000003428B0 "h\n"
 *   insn=0x00000000003428B4 string=0x00000000003428B8 "@"
 *   insn=0x00000000003428B8 string=0x00000000003428BC ""
 *   insn=0x00000000003428BC string=0x00000000003428C0 ""
 *   insn=0x00000000003428C4 string=0x00000000003428C8 ""
 *   insn=0x00000000003428C8 string=0x00000000003428CC "@"
 *   insn=0x00000000003428D8 string=0x00000000003428DC "h"
 *   insn=0x00000000003428DC string=0x00000000003428E0 ""
 *   insn=0x00000000003428E0 string=0x00000000003428E4 "h"
 *   insn=0x00000000003428E4 string=0x00000000003428E8 "!"
 *   insn=0x00000000003428E8 string=0x00000000003428EC "h"
 *   insn=0x00000000003428F0 string=0x00000000003428F4 "\t@"
 *   insn=0x00000000003428F8 string=0x00000000003428FC "h\n@"
 *   insn=0x00000000003428FC string=0x0000000000342900 ""
 *   insn=0x0000000000342900 string=0x0000000000342904 "h\n"
 *   insn=0x0000000000342908 string=0x0000000000342918 "h"
 *   insn=0x0000000000342928 string=0x000000000034292C " "
 *   insn=0x0000000000342930 string=0x0000000000342934 "3"
 *   insn=0x0000000000342934 string=0x0000000000342938 "h"
 *   insn=0x0000000000342938 string=0x000000000034293C ""
 *   insn=0x000000000034293C string=0x0000000000342940 "h"
 *   insn=0x0000000000342944 string=0x0000000000342948 "h"
 *   insn=0x0000000000342948 string=0x000000000034294C "\t@"
 *   insn=0x0000000000342954 string=0x0000000000342958 "h\n@"
 *   insn=0x0000000000342958 string=0x000000000034295C ""
 *   insn=0x000000000034295C string=0x0000000000342960 "h\n"
 *   insn=0x0000000000342964 string=0x0000000000342968 "h"
 *   insn=0x0000000000342968 string=0x000000000034296C "@"
 *   insn=0x000000000034297C string=0x0000000000342980 "s."
 *   insn=0x0000000000342980 string=0x0000000000342984 "K"
 *   insn=0x0000000000342984 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUISlider,Caver::GUISlider>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // x0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8

  result = (_QWORD *)a1[1];
  if ( !result || !result[1] )
  {
    v5 = *(_QWORD **)(a2 + 8);
    if ( v5 )
      ++v5[1];
    *a1 = a3;
    if ( v5 != result )
    {
      if ( v5 )
        ++v5[2];
      if ( result )
      {
        v6 = result[2] - 1LL;
        result[2] = v6;
        if ( !v6 )
          result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 24LL))(result);
      }
      a1[1] = v5;
    }
    if ( v5 )
    {
      v7 = v5[1] - 1LL;
      v5[1] = v7;
      if ( !v7 )
      {
        result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
        v8 = v5[2] - 1LL;
        v5[2] = v8;
        if ( !v8 )
          return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
      }
    }
  }
  return result;
}

