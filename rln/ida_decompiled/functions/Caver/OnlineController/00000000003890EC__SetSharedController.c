/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003890EC
 * Mangled: _ZN5Caver16OnlineController19SetSharedControllerERKN5boost10shared_ptrIS0_EE
 * Demangled: Caver::OnlineController::SetSharedController(boost::shared_ptr<Caver::OnlineController> const&)
 *
 * Callers: 1
 *   0x00000000001F5DF0  Caver::OnlineController::SetSharedController(boost::shared_ptr<Caver::OnlineController> const&)
 *
 * Callees: 0
 *
 * Referenced strings: 19
 *   insn=0x00000000003890F0 string=0x00000000003890F4 "\n"
 *   insn=0x00000000003890F4 string=0x00000000003890F8 "J"
 *   insn=0x00000000003890F8 string=0x00000000003890FC "\n"
 *   insn=0x0000000000389108 string=0x000000000038910C "\n"
 *   insn=0x000000000038910C string=0x0000000000389114 "S"
 *   insn=0x0000000000389114 string=0x0000000000389118 "I!"
 *   insn=0x0000000000389118 string=0x000000000038911C "3"
 *   insn=0x000000000038911C string=0x0000000000389120 "h"
 *   insn=0x000000000038911C string=0x0000000000389160 ""
 *   insn=0x0000000000389120 string=0x0000000000389124 ""
 *   insn=0x0000000000389124 string=0x0000000000389128 "h"
 *   insn=0x000000000038912C string=0x0000000000389130 "h"
 *   insn=0x0000000000389134 string=0x0000000000389138 "\t@"
 *   insn=0x000000000038913C string=0x0000000000389140 "h\n@"
 *   insn=0x0000000000389140 string=0x0000000000389144 ""
 *   insn=0x0000000000389144 string=0x0000000000389148 "h\n"
 *   insn=0x000000000038914C string=0x0000000000389150 "h"
 *   insn=0x0000000000389154 string=0x0000000000389158 "@"
 *   insn=0x0000000000389160 string=0x0000000000389164 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::OnlineController::SetSharedController(__int64 *result)
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
  v3 = (_QWORD *)qword_6E9930;
  qword_6E9928 = v2;
  qword_6E9930 = v1;
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
        result = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
  *(_DWORD *)(qword_6E9928 + 8) = 0;
  return result;
}

