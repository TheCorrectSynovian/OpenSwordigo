/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000356DCC
 * Mangled: _ZN5Caver18GameViewController8ShowMenuEv
 * Demangled: Caver::GameViewController::ShowMenu(void)
 *
 * Callers: 1
 *   0x00000000001F76B0  Caver::GameViewController::ShowMenu(void)
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8420  Caver::GameMenuViewController::GameMenuViewController(void)
 *   0x00000000001F93C0  boost::shared_ptr<Caver::GameMenuViewController>::shared_ptr<Caver::GameMenuViewController>(Caver::GameMenuViewController *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000357024  boost::shared_ptr<Caver::GameMenuViewController>::shared_ptr<Caver::GameMenuViewController>(Caver::GameMenuViewController *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 59
 *   insn=0x0000000000356DDC string=0x0000000000356DE0 "U"
 *   insn=0x0000000000356DF4 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000356DFC string=0x00000000001F8420 "0'"
 *   insn=0x0000000000356E04 string=0x0000000000356E08 "n"
 *   insn=0x0000000000356E08 string=0x00000000001F93C0 "0'"
 *   insn=0x0000000000356E0C string=0x0000000000356E10 "ib"
 *   insn=0x0000000000356E10 string=0x0000000000356E14 "\tA"
 *   insn=0x0000000000356E14 string=0x0000000000356E18 "j"
 *   insn=0x0000000000356E1C string=0x0000000000356E20 "+"
 *   insn=0x0000000000356E20 string=0x0000000000356E24 "k"
 *   insn=0x0000000000356E24 string=0x0000000000356E28 "+"
 *   insn=0x0000000000356E2C string=0x0000000000356E30 "\n"
 *   insn=0x0000000000356E30 string=0x0000000000356E34 "4"
 *   insn=0x0000000000356E34 string=0x0000000000356E78 "h"
 *   insn=0x0000000000356E38 string=0x0000000000356E3C ""
 *   insn=0x0000000000356E48 string=0x0000000000356E4C "\t@"
 *   insn=0x0000000000356E58 string=0x0000000000356E5C ""
 *   insn=0x0000000000356E68 string=0x0000000000356E6C "@"
 *   insn=0x0000000000356E7C string=0x0000000000356E80 ")@"
 *   insn=0x0000000000356E88 string=0x0000000000356E8C "*"
 *   insn=0x0000000000356E8C string=0x0000000000356E90 "J"
 *   insn=0x0000000000356E90 string=0x0000000000356E94 "*"
 *   insn=0x0000000000356EA4 string=0x0000000000356EA8 "3"
 *   insn=0x0000000000356EA8 string=0x0000000000356EAC "h"
 *   insn=0x0000000000356EAC string=0x0000000000356EB0 ""
 *   insn=0x0000000000356EB0 string=0x0000000000356EB4 "h"
 *   insn=0x0000000000356EB8 string=0x0000000000356EBC "h"
 *   insn=0x0000000000356EBC string=0x0000000000356EC0 "\t@"
 *   insn=0x0000000000356EC8 string=0x0000000000356ECC "h\n@"
 *   insn=0x0000000000356ECC string=0x0000000000356ED0 ""
 *   insn=0x0000000000356ED0 string=0x0000000000356ED4 "h\n"
 *   insn=0x0000000000356ED8 string=0x0000000000356EDC "h"
 *   insn=0x0000000000356EDC string=0x0000000000356EE0 "@"
 *   insn=0x0000000000356EEC string=0x0000000000356EF0 "3"
 *   insn=0x0000000000356EF0 string=0x0000000000356EF4 "h"
 *   insn=0x0000000000356EF4 string=0x0000000000356EF8 ""
 *   insn=0x0000000000356EF8 string=0x0000000000356EFC "h"
 *   insn=0x0000000000356F00 string=0x0000000000356F04 "h"
 *   insn=0x0000000000356F08 string=0x0000000000356F0C "\t@"
 *   insn=0x0000000000356F10 string=0x0000000000356F14 "h\n@"
 *   insn=0x0000000000356F14 string=0x0000000000356F18 ""
 *   insn=0x0000000000356F18 string=0x0000000000356F1C "h\n"
 *   insn=0x0000000000356F20 string=0x0000000000356F24 "h"
 *   insn=0x0000000000356F28 string=0x0000000000356F2C "@"
 *   insn=0x0000000000356F58 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000356F68 string=0x0000000000356F6C "&"
 *   insn=0x0000000000356F74 string=0x0000000000356F78 "4"
 *   insn=0x0000000000356F7C string=0x0000000000356F80 ""
 *   insn=0x0000000000356F8C string=0x0000000000356F90 "\t@"
 *   insn=0x0000000000356F9C string=0x0000000000356FA0 ""
 *   insn=0x0000000000356FAC string=0x0000000000356FB0 "@"
 *   insn=0x0000000000356FBC string=0x0000000000356FC0 "4"
 *   insn=0x0000000000356FC4 string=0x0000000000356FC8 ""
 *   insn=0x0000000000356FD4 string=0x0000000000356FD8 "\t@"
 *   insn=0x0000000000356FE4 string=0x0000000000356FE8 ""
 *   insn=0x0000000000356FF4 string=0x0000000000356FF8 "@"
 *   insn=0x0000000000357004 string=0x0000000000357008 "/"
 *   insn=0x0000000000357018 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000035701C string=0x0000000000357020 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameViewController::ShowMenu(Caver::GameViewController *this)
{
  Caver::GameMenuViewController *v2; // x0
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x10
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 (__fastcall *v9)(Caver::GameViewController *, __int64 *); // x8
  __int64 result; // x0
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // [xsp+8h] [xbp-48h] BYREF
  _QWORD *v18; // [xsp+10h] [xbp-40h]
  __int64 v19; // [xsp+18h] [xbp-38h]
  _QWORD *v20; // [xsp+20h] [xbp-30h]
  __int64 v21; // [xsp+28h] [xbp-28h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::GameMenuViewController *)operator new(0xD0u);
  Caver::GameMenuViewController::GameMenuViewController(v2);
  boost::shared_ptr<Caver::GameMenuViewController>::shared_ptr<Caver::GameMenuViewController>();
  v3 = v19;
  *(_QWORD *)(v19 + 128) = (char *)this + 88;
  v5 = *((_QWORD *)this + 17);
  v4 = *((_QWORD *)this + 18);
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = *(_QWORD **)(v3 + 144);
  *(_QWORD *)(v3 + 136) = v5;
  *(_QWORD *)(v3 + 144) = v4;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  v9 = *(__int64 (__fastcall **)(Caver::GameViewController *, __int64 *))(*(_QWORD *)this + 80LL);
  v17 = v19;
  v18 = v20;
  if ( v20 )
    ++v20[1];
  result = v9(this, &v17);
  v11 = v18;
  if ( v18 )
  {
    v12 = v18[1] - 1LL;
    v18[1] = v12;
    if ( !v12 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v14 = v20;
  if ( v20 )
  {
    v15 = v20[1] - 1LL;
    v20[1] = v15;
    if ( !v15 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  return result;
}

