/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000365070
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_21CreditsViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::CreditsViewController,Caver::CreditsViewController>(boost::shared_ptr<Caver::CreditsViewController> const*,Caver::CreditsViewController *)
 *
 * Callers: 1
 *   0x00000000001F8B10  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::CreditsViewController,Caver::CreditsViewController>(boost::shared_ptr<Caver::CreditsViewController> const*,Caver::CreditsViewController *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x0000000000365080 string=0x0000000000365084 "`"
 *   insn=0x0000000000365084 string=0x0000000000365088 ""
 *   insn=0x0000000000365084 string=0x0000000000365090 "3"
 *   insn=0x0000000000365088 string=0x000000000036508C "h"
 *   insn=0x0000000000365094 string=0x0000000000365098 "h"
 *   insn=0x0000000000365098 string=0x000000000036509C ""
 *   insn=0x000000000036509C string=0x00000000003650A0 "h"
 *   insn=0x00000000003650B0 string=0x00000000003650B4 "h\n@"
 *   insn=0x00000000003650B4 string=0x00000000003650B8 ""
 *   insn=0x00000000003650B8 string=0x00000000003650BC "h\n"
 *   insn=0x00000000003650C0 string=0x00000000003650C4 "@"
 *   insn=0x00000000003650C4 string=0x00000000003650C8 ""
 *   insn=0x00000000003650C8 string=0x00000000003650CC ""
 *   insn=0x00000000003650D0 string=0x00000000003650D4 ""
 *   insn=0x00000000003650D4 string=0x00000000003650D8 "@"
 *   insn=0x00000000003650E4 string=0x00000000003650E8 "h"
 *   insn=0x00000000003650E8 string=0x00000000003650EC ""
 *   insn=0x00000000003650EC string=0x00000000003650F0 "h"
 *   insn=0x00000000003650F0 string=0x00000000003650F4 "!"
 *   insn=0x00000000003650F4 string=0x00000000003650F8 "h"
 *   insn=0x00000000003650FC string=0x0000000000365100 "\t@"
 *   insn=0x0000000000365104 string=0x0000000000365108 "h\n@"
 *   insn=0x0000000000365108 string=0x000000000036510C ""
 *   insn=0x000000000036510C string=0x0000000000365110 "h\n"
 *   insn=0x0000000000365114 string=0x0000000000365124 "h"
 *   insn=0x0000000000365134 string=0x0000000000365138 " "
 *   insn=0x000000000036513C string=0x0000000000365140 "3"
 *   insn=0x0000000000365140 string=0x0000000000365144 "h"
 *   insn=0x0000000000365144 string=0x0000000000365148 ""
 *   insn=0x0000000000365148 string=0x000000000036514C "h"
 *   insn=0x0000000000365150 string=0x0000000000365154 "h"
 *   insn=0x0000000000365154 string=0x0000000000365158 "\t@"
 *   insn=0x0000000000365160 string=0x0000000000365164 "h\n@"
 *   insn=0x0000000000365164 string=0x0000000000365168 ""
 *   insn=0x0000000000365168 string=0x000000000036516C "h\n"
 *   insn=0x0000000000365170 string=0x0000000000365174 "h"
 *   insn=0x0000000000365174 string=0x0000000000365178 "@"
 *   insn=0x0000000000365188 string=0x000000000036518C "p"
 *   insn=0x000000000036518C string=0x0000000000365190 "HH"
 *   insn=0x0000000000365190 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::CreditsViewController,Caver::CreditsViewController>(
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

