/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044A4A0
 * Mangled: _ZN5boost10shared_ptrIN5Caver12MeshInstanceEED2Ev
 * Demangled: boost::shared_ptr<Caver::MeshInstance>::~shared_ptr()
 *
 * Callers: 1
 *   0x000000000020B02C  sub_20B02C
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x000000000044A4B0 string=0x000000000044A4B4 "h"
 *   insn=0x000000000044A4B4 string=0x000000000044A4B8 ""
 *   insn=0x000000000044A4B8 string=0x000000000044A4BC "h"
 *   insn=0x000000000044A4BC string=0x000000000044A4C0 "!"
 *   insn=0x000000000044A4C0 string=0x000000000044A4C4 "h"
 *   insn=0x000000000044A4C8 string=0x000000000044A4CC "\t@"
 *   insn=0x000000000044A4D0 string=0x000000000044A4D4 "h\n@"
 *   insn=0x000000000044A4D4 string=0x000000000044A4D8 ""
 *   insn=0x000000000044A4D8 string=0x000000000044A4DC "h\n"
 *   insn=0x000000000044A4E0 string=0x000000000044A4F0 "h"
 *   insn=0x000000000044A500 string=0x000000000044A504 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::MeshInstance>::~shared_ptr(__int64 result)
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

