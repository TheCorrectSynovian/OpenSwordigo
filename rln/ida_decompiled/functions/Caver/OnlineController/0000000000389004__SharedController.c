/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000389004
 * Mangled: _ZN5Caver16OnlineController16SharedControllerEv
 * Demangled: Caver::OnlineController::SharedController(void)
 *
 * Callers: 1
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBB20  boost::shared_ptr<Caver::OnlineController>::shared_ptr<Caver::OnlineController>(Caver::OnlineController *)
 *
 * Referenced strings: 23
 *   insn=0x0000000000389014 string=0x0000000000389018 "T"
 *   insn=0x0000000000389030 string=0x0000000000389034 "k"
 *   insn=0x0000000000389034 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000389038 string=0x000000000038903C ")1E"
 *   insn=0x0000000000389048 string=0x000000000038904C ")A"
 *   insn=0x000000000038904C string=0x0000000000389050 "\t}"
 *   insn=0x0000000000389054 string=0x0000000000389058 ""
 *   insn=0x0000000000389054 string=0x00000000001FBB20 "0'"
 *   insn=0x0000000000389058 string=0x0000000000389060 "\tM@"
 *   insn=0x0000000000389070 string=0x0000000000389074 "\n%"
 *   insn=0x0000000000389074 string=0x0000000000389078 "3"
 *   insn=0x0000000000389078 string=0x000000000038907C "h"
 *   insn=0x000000000038907C string=0x0000000000389080 ""
 *   insn=0x0000000000389080 string=0x0000000000389084 "h"
 *   insn=0x0000000000389088 string=0x000000000038908C "h"
 *   insn=0x0000000000389090 string=0x0000000000389094 "\t@"
 *   insn=0x0000000000389098 string=0x000000000038909C "h\n@"
 *   insn=0x000000000038909C string=0x00000000003890A0 ""
 *   insn=0x00000000003890A0 string=0x00000000003890A4 "h\n"
 *   insn=0x00000000003890A8 string=0x00000000003890AC "h"
 *   insn=0x00000000003890B0 string=0x00000000003890B4 "@"
 *   insn=0x00000000003890D0 string=0x00000000003890E8 "z"
 *   insn=0x00000000003890E8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OnlineController::SharedController(Caver::OnlineController *this)
{
  __int64 result; // x0
  _QWORD *v2; // x0
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // [xsp+8h] [xbp-38h]
  __int64 v7; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  result = qword_6E9928;
  if ( !qword_6E9928 )
  {
    v2 = (_QWORD *)operator new(0x10u);
    *v2 = off_6CD5F8;
    v2[1] = 0;
    boost::shared_ptr<Caver::OnlineController>::shared_ptr<Caver::OnlineController>();
    v3 = (_QWORD *)qword_6E9930;
    qword_6E9928 = v6;
    qword_6E9930 = v7;
    if ( v3 )
    {
      v4 = v3[1] - 1LL;
      v3[1] = v4;
      if ( !v4 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
        v5 = v3[2] - 1LL;
        v3[2] = v5;
        if ( !v5 )
          (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
      }
    }
    result = qword_6E9928;
    *(_DWORD *)(qword_6E9928 + 8) = 0;
  }
  return result;
}

