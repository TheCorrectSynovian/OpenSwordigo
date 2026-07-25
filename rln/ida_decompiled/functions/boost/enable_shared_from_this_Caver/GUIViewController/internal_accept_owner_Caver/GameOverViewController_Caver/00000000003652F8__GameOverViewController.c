/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003652F8
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_22GameOverViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameOverViewController,Caver::GameOverViewController>(boost::shared_ptr<Caver::GameOverViewController> const*,Caver::GameOverViewController *)
 *
 * Callers: 1
 *   0x00000000001F8B50  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameOverViewController,Caver::GameOverViewController>(boost::shared_ptr<Caver::GameOverViewController> const*,Caver::GameOverViewController *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x0000000000365308 string=0x000000000036530C "`"
 *   insn=0x000000000036530C string=0x0000000000365310 ""
 *   insn=0x000000000036530C string=0x0000000000365318 "3"
 *   insn=0x0000000000365310 string=0x0000000000365314 "h"
 *   insn=0x000000000036531C string=0x0000000000365320 "h"
 *   insn=0x0000000000365320 string=0x0000000000365324 ""
 *   insn=0x0000000000365324 string=0x0000000000365328 "h"
 *   insn=0x0000000000365338 string=0x000000000036533C "h\n@"
 *   insn=0x000000000036533C string=0x0000000000365340 ""
 *   insn=0x0000000000365340 string=0x0000000000365344 "h\n"
 *   insn=0x0000000000365348 string=0x000000000036534C "@"
 *   insn=0x000000000036534C string=0x0000000000365350 ""
 *   insn=0x0000000000365350 string=0x0000000000365354 ""
 *   insn=0x0000000000365358 string=0x000000000036535C ""
 *   insn=0x000000000036535C string=0x0000000000365360 "@"
 *   insn=0x000000000036536C string=0x0000000000365370 "h"
 *   insn=0x0000000000365370 string=0x0000000000365374 ""
 *   insn=0x0000000000365374 string=0x0000000000365378 "h"
 *   insn=0x0000000000365378 string=0x000000000036537C "!"
 *   insn=0x000000000036537C string=0x0000000000365380 "h"
 *   insn=0x0000000000365384 string=0x0000000000365388 "\t@"
 *   insn=0x000000000036538C string=0x0000000000365390 "h\n@"
 *   insn=0x0000000000365390 string=0x0000000000365394 ""
 *   insn=0x0000000000365394 string=0x0000000000365398 "h\n"
 *   insn=0x000000000036539C string=0x00000000003653AC "h"
 *   insn=0x00000000003653BC string=0x00000000003653C0 " "
 *   insn=0x00000000003653C4 string=0x00000000003653C8 "3"
 *   insn=0x00000000003653C8 string=0x00000000003653CC "h"
 *   insn=0x00000000003653CC string=0x00000000003653D0 ""
 *   insn=0x00000000003653D0 string=0x00000000003653D4 "h"
 *   insn=0x00000000003653D8 string=0x00000000003653DC "h"
 *   insn=0x00000000003653DC string=0x00000000003653E0 "\t@"
 *   insn=0x00000000003653E8 string=0x00000000003653EC "h\n@"
 *   insn=0x00000000003653EC string=0x00000000003653F0 ""
 *   insn=0x00000000003653F0 string=0x00000000003653F4 "h\n"
 *   insn=0x00000000003653F8 string=0x00000000003653FC "h"
 *   insn=0x00000000003653FC string=0x0000000000365400 "@"
 *   insn=0x000000000036540C string=0x0000000000365410 "-q"
 *   insn=0x0000000000365418 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameOverViewController,Caver::GameOverViewController>(
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

