/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000347878
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_24OnlineMenuViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::OnlineMenuViewController,Caver::OnlineMenuViewController>(boost::shared_ptr<Caver::OnlineMenuViewController> const*,Caver::OnlineMenuViewController *)
 *
 * Callers: 1
 *   0x00000000001FD320  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::OnlineMenuViewController,Caver::OnlineMenuViewController>(boost::shared_ptr<Caver::OnlineMenuViewController> const*,Caver::OnlineMenuViewController *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x0000000000347888 string=0x000000000034788C "`"
 *   insn=0x000000000034788C string=0x0000000000347890 ""
 *   insn=0x000000000034788C string=0x0000000000347898 "3"
 *   insn=0x0000000000347890 string=0x0000000000347894 "h"
 *   insn=0x000000000034789C string=0x00000000003478A0 "h"
 *   insn=0x00000000003478A0 string=0x00000000003478A4 ""
 *   insn=0x00000000003478A4 string=0x00000000003478A8 "h"
 *   insn=0x00000000003478B8 string=0x00000000003478BC "h\n@"
 *   insn=0x00000000003478BC string=0x00000000003478C0 ""
 *   insn=0x00000000003478C0 string=0x00000000003478C4 "h\n"
 *   insn=0x00000000003478C8 string=0x00000000003478CC "@"
 *   insn=0x00000000003478CC string=0x00000000003478D0 ""
 *   insn=0x00000000003478D0 string=0x00000000003478D4 ""
 *   insn=0x00000000003478D8 string=0x00000000003478DC ""
 *   insn=0x00000000003478DC string=0x00000000003478E0 "@"
 *   insn=0x00000000003478EC string=0x00000000003478F0 "h"
 *   insn=0x00000000003478F0 string=0x00000000003478F4 ""
 *   insn=0x00000000003478F4 string=0x00000000003478F8 "h"
 *   insn=0x00000000003478F8 string=0x00000000003478FC "!"
 *   insn=0x00000000003478FC string=0x0000000000347900 "h"
 *   insn=0x0000000000347904 string=0x0000000000347908 "\t@"
 *   insn=0x000000000034790C string=0x0000000000347910 "h\n@"
 *   insn=0x0000000000347910 string=0x0000000000347914 ""
 *   insn=0x0000000000347914 string=0x0000000000347918 "h\n"
 *   insn=0x000000000034791C string=0x000000000034792C "h"
 *   insn=0x000000000034793C string=0x0000000000347940 " "
 *   insn=0x0000000000347944 string=0x0000000000347948 "3"
 *   insn=0x0000000000347948 string=0x000000000034794C "h"
 *   insn=0x000000000034794C string=0x0000000000347950 ""
 *   insn=0x0000000000347950 string=0x0000000000347954 "h"
 *   insn=0x0000000000347958 string=0x000000000034795C "h"
 *   insn=0x000000000034795C string=0x0000000000347960 "\t@"
 *   insn=0x0000000000347968 string=0x000000000034796C "h\n@"
 *   insn=0x000000000034796C string=0x0000000000347970 ""
 *   insn=0x0000000000347970 string=0x0000000000347974 "h\n"
 *   insn=0x0000000000347978 string=0x000000000034797C "h"
 *   insn=0x000000000034797C string=0x0000000000347980 "@"
 *   insn=0x0000000000347990 string=0x0000000000347994 "n"
 *   insn=0x0000000000347994 string=0x0000000000347998 "F"
 *   insn=0x0000000000347998 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::OnlineMenuViewController,Caver::OnlineMenuViewController>(
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

