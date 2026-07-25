/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A9598
 * Mangled: _ZN5Caver15StoreController16SharedControllerEv
 * Demangled: Caver::StoreController::SharedController(void)
 *
 * Callers: 1
 *   0x00000000001FF270  Caver::StoreController::SharedController(void)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBBF0  boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>(Caver::StoreController *)
 *
 * Referenced strings: 23
 *   insn=0x00000000003A95A8 string=0x00000000003A95AC "T"
 *   insn=0x00000000003A95C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003A95D0 string=0x00000000003A95D4 ")=C"
 *   insn=0x00000000003A95D4 string=0x00000000003A95D8 "J"
 *   insn=0x00000000003A95E0 string=0x00000000003A95E4 ")A"
 *   insn=0x00000000003A95E4 string=0x00000000003A95E8 "Ja"
 *   insn=0x00000000003A95EC string=0x00000000003A95F0 "\t)"
 *   insn=0x00000000003A95F4 string=0x00000000003A95F8 ""
 *   insn=0x00000000003A95F4 string=0x00000000001FBBF0 "0'"
 *   insn=0x00000000003A95F8 string=0x00000000003A9600 "\tM@"
 *   insn=0x00000000003A9610 string=0x00000000003A9614 "\n%"
 *   insn=0x00000000003A9614 string=0x00000000003A9618 "3"
 *   insn=0x00000000003A9618 string=0x00000000003A961C "h"
 *   insn=0x00000000003A961C string=0x00000000003A9620 ""
 *   insn=0x00000000003A9620 string=0x00000000003A9624 "h"
 *   insn=0x00000000003A9628 string=0x00000000003A962C "h"
 *   insn=0x00000000003A9630 string=0x00000000003A9634 "\t@"
 *   insn=0x00000000003A9638 string=0x00000000003A963C "h\n@"
 *   insn=0x00000000003A963C string=0x00000000003A9640 ""
 *   insn=0x00000000003A9640 string=0x00000000003A9644 "h\n"
 *   insn=0x00000000003A9648 string=0x00000000003A964C "h"
 *   insn=0x00000000003A9650 string=0x00000000003A9654 "@"
 *   insn=0x00000000003A9684 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreController::SharedController(Caver::StoreController *this)
{
  __int64 result; // x0
  _QWORD *v2; // x0
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // [xsp+8h] [xbp-38h]
  __int64 v7; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  result = qword_6E9970;
  if ( !qword_6E9970 )
  {
    v2 = (_QWORD *)operator new(0x10u);
    *v2 = off_6CEC48;
    v2[1] = &byte_6FD2F8;
    boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>();
    v3 = (_QWORD *)qword_6E9978;
    qword_6E9970 = v6;
    qword_6E9978 = v7;
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
    return qword_6E9970;
  }
  return result;
}

