/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003651B4
 * Mangled: _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_21LevelUpViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::LevelUpViewController,Caver::LevelUpViewController>(boost::shared_ptr<Caver::LevelUpViewController> const*,Caver::LevelUpViewController *)
 *
 * Callers: 1
 *   0x0000000000200A20  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::LevelUpViewController,Caver::LevelUpViewController>(boost::shared_ptr<Caver::LevelUpViewController> const*,Caver::LevelUpViewController *)
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x00000000003651C4 string=0x00000000003651C8 "`"
 *   insn=0x00000000003651C8 string=0x00000000003651CC ""
 *   insn=0x00000000003651C8 string=0x00000000003651D4 "3"
 *   insn=0x00000000003651CC string=0x00000000003651D0 "h"
 *   insn=0x00000000003651D8 string=0x00000000003651DC "h"
 *   insn=0x00000000003651DC string=0x00000000003651E0 ""
 *   insn=0x00000000003651E0 string=0x00000000003651E4 "h"
 *   insn=0x00000000003651F4 string=0x00000000003651F8 "h\n@"
 *   insn=0x00000000003651F8 string=0x00000000003651FC ""
 *   insn=0x00000000003651FC string=0x0000000000365200 "h\n"
 *   insn=0x0000000000365204 string=0x0000000000365208 "@"
 *   insn=0x0000000000365208 string=0x000000000036520C ""
 *   insn=0x000000000036520C string=0x0000000000365210 ""
 *   insn=0x0000000000365214 string=0x0000000000365218 ""
 *   insn=0x0000000000365218 string=0x000000000036521C "@"
 *   insn=0x0000000000365228 string=0x000000000036522C "h"
 *   insn=0x000000000036522C string=0x0000000000365230 ""
 *   insn=0x0000000000365230 string=0x0000000000365234 "h"
 *   insn=0x0000000000365234 string=0x0000000000365238 "!"
 *   insn=0x0000000000365238 string=0x000000000036523C "h"
 *   insn=0x0000000000365240 string=0x0000000000365244 "\t@"
 *   insn=0x0000000000365248 string=0x000000000036524C "h\n@"
 *   insn=0x000000000036524C string=0x0000000000365250 ""
 *   insn=0x0000000000365250 string=0x0000000000365254 "h\n"
 *   insn=0x0000000000365258 string=0x0000000000365268 "h"
 *   insn=0x0000000000365278 string=0x000000000036527C " "
 *   insn=0x0000000000365280 string=0x0000000000365284 "3"
 *   insn=0x0000000000365284 string=0x0000000000365288 "h"
 *   insn=0x0000000000365288 string=0x000000000036528C ""
 *   insn=0x000000000036528C string=0x0000000000365290 "h"
 *   insn=0x0000000000365294 string=0x0000000000365298 "h"
 *   insn=0x0000000000365298 string=0x000000000036529C "\t@"
 *   insn=0x00000000003652A4 string=0x00000000003652A8 "h\n@"
 *   insn=0x00000000003652A8 string=0x00000000003652AC ""
 *   insn=0x00000000003652AC string=0x00000000003652B0 "h\n"
 *   insn=0x00000000003652B4 string=0x00000000003652B8 "h"
 *   insn=0x00000000003652B8 string=0x00000000003652BC "@"
 *   insn=0x00000000003652C8 string=0x00000000003652CC "~q"
 *   insn=0x00000000003652D4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::LevelUpViewController,Caver::LevelUpViewController>(
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

