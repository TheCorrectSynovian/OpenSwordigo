/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B42F8
 * Mangled: _ZN5boost10shared_ptrIN5Caver11GameOptionsEED2Ev
 * Demangled: boost::shared_ptr<Caver::GameOptions>::~shared_ptr()
 *
 * Callers: 1
 *   0x0000000000209F4C  sub_209F4C
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x00000000003B4308 string=0x00000000003B430C "h"
 *   insn=0x00000000003B430C string=0x00000000003B4310 ""
 *   insn=0x00000000003B4310 string=0x00000000003B4314 "h"
 *   insn=0x00000000003B4314 string=0x00000000003B4318 "!"
 *   insn=0x00000000003B4318 string=0x00000000003B431C "h"
 *   insn=0x00000000003B4320 string=0x00000000003B4324 "\t@"
 *   insn=0x00000000003B4328 string=0x00000000003B432C "h\n@"
 *   insn=0x00000000003B432C string=0x00000000003B4330 ""
 *   insn=0x00000000003B4330 string=0x00000000003B4334 "h\n"
 *   insn=0x00000000003B4338 string=0x00000000003B4348 "h"
 *   insn=0x00000000003B4358 string=0x00000000003B435C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::GameOptions>::~shared_ptr(__int64 result)
{
  _QWORD *v1; // x19
  __int64 v2; // x8
  __int64 v3; // x8

  v1 = *(_QWORD **)(result + 8);
  if ( v1 )
  {
    v2 = v1[1] - 1LL;
    v1[1] = v2;
    if ( !v2 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v1 + 16LL))(v1);
      v3 = v1[2] - 1LL;
      v1[2] = v3;
      if ( !v3 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v1 + 24LL))(v1);
    }
  }
  return result;
}

