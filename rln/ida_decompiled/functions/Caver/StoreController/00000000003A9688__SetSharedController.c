/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A9688
 * Mangled: _ZN5Caver15StoreController19SetSharedControllerERKN5boost10shared_ptrIS0_EE
 * Demangled: Caver::StoreController::SetSharedController(boost::shared_ptr<Caver::StoreController> const&)
 *
 * Callers: 1
 *   0x00000000001F5CE0  Caver::StoreController::SetSharedController(boost::shared_ptr<Caver::StoreController> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x00000000003A9690 string=0x00000000003A9694 "\t @"
 *   insn=0x00000000003A9698 string=0x00000000003A969C "\n"
 *   insn=0x00000000003A9698 string=0x00000000003A96A8 "\n"
 *   insn=0x00000000003A969C string=0x00000000003A96A0 "J"
 *   insn=0x00000000003A96A0 string=0x00000000003A96A4 "\n"
 *   insn=0x00000000003A96A8 string=0x00000000003A96B0 "S"
 *   insn=0x00000000003A96B0 string=0x00000000003A96B4 "I!"
 *   insn=0x00000000003A96B8 string=0x00000000003A96BC "h"
 *   insn=0x00000000003A96BC string=0x00000000003A96C0 ""
 *   insn=0x00000000003A96C0 string=0x00000000003A96C4 "h"
 *   insn=0x00000000003A96C4 string=0x00000000003A96C8 "!"
 *   insn=0x00000000003A96C8 string=0x00000000003A96CC "h"
 *   insn=0x00000000003A96D0 string=0x00000000003A96D4 "\t@"
 *   insn=0x00000000003A96D8 string=0x00000000003A96DC "h\n@"
 *   insn=0x00000000003A96DC string=0x00000000003A96E0 ""
 *   insn=0x00000000003A96E0 string=0x00000000003A96E4 "h\n"
 *   insn=0x00000000003A96E8 string=0x00000000003A96F8 "h"
 *   insn=0x00000000003A9708 string=0x00000000003A970C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::StoreController::SetSharedController(__int64 *result)
{
  __int64 v1; // x8
  __int64 v2; // x9
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x8

  v2 = *result;
  v1 = result[1];
  if ( v1 )
    ++*(_QWORD *)(v1 + 8);
  v3 = (_QWORD *)qword_6E9978;
  qword_6E9970 = v2;
  qword_6E9978 = v1;
  if ( v3 )
  {
    v4 = v3[1] - 1LL;
    v3[1] = v4;
    if ( !v4 )
    {
      result = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        return (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  return result;
}

