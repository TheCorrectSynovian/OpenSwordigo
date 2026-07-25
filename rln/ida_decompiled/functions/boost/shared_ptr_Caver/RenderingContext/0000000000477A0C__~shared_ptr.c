/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000477A0C
 * Mangled: _ZN5boost10shared_ptrIN5Caver16RenderingContextEED2Ev
 * Demangled: boost::shared_ptr<Caver::RenderingContext>::~shared_ptr()
 *
 * Callers: 1
 *   0x000000000020C014  sub_20C014
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x0000000000477A1C string=0x0000000000477A20 "h"
 *   insn=0x0000000000477A20 string=0x0000000000477A24 ""
 *   insn=0x0000000000477A24 string=0x0000000000477A28 "h"
 *   insn=0x0000000000477A28 string=0x0000000000477A2C "!"
 *   insn=0x0000000000477A2C string=0x0000000000477A30 "h"
 *   insn=0x0000000000477A34 string=0x0000000000477A38 "\t@"
 *   insn=0x0000000000477A3C string=0x0000000000477A40 "h\n@"
 *   insn=0x0000000000477A40 string=0x0000000000477A44 ""
 *   insn=0x0000000000477A44 string=0x0000000000477A48 "h\n"
 *   insn=0x0000000000477A4C string=0x0000000000477A5C "h"
 *   insn=0x0000000000477A6C string=0x0000000000477A70 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall boost::shared_ptr<Caver::RenderingContext>::~shared_ptr(__int64 result)
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

