/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002396A0
 * Mangled: _ZN5Caver14ShapeComponent8SetShapeERKNS_5ShapeE
 * Demangled: Caver::ShapeComponent::SetShape(Caver::Shape const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x00000000002396A8 string=0x00000000002396AC "("
 *   insn=0x00000000002396AC string=0x00000000002396B0 "p"
 *   insn=0x00000000002396B0 string=0x00000000002396B4 ")"
 *   insn=0x00000000002396B8 string=0x00000000002396BC "\n"
 *   insn=0x00000000002396BC string=0x00000000002396C0 "J"
 *   insn=0x00000000002396C0 string=0x00000000002396C4 "\n"
 *   insn=0x00000000002396C8 string=0x00000000002396CC "\t"
 *   insn=0x00000000002396D0 string=0x00000000002396D4 "h"
 *   insn=0x00000000002396D4 string=0x00000000002396D8 ""
 *   insn=0x00000000002396D8 string=0x00000000002396DC "h"
 *   insn=0x00000000002396DC string=0x00000000002396E0 "!"
 *   insn=0x00000000002396E0 string=0x00000000002396E4 "h"
 *   insn=0x00000000002396E8 string=0x00000000002396EC "\t@"
 *   insn=0x00000000002396F0 string=0x00000000002396F4 "h\n@"
 *   insn=0x00000000002396F4 string=0x00000000002396F8 ""
 *   insn=0x00000000002396F8 string=0x00000000002396FC "h\n"
 *   insn=0x0000000000239700 string=0x0000000000239710 "h"
 *   insn=0x0000000000239720 string=0x0000000000239724 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShapeComponent::SetShape(__int64 result, __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  _QWORD *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x8

  *(_DWORD *)(result + 112) = *(_DWORD *)a2;
  v3 = *(_QWORD *)(a2 + 8);
  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 )
    ++*(_QWORD *)(v2 + 8);
  v4 = *(_QWORD **)(result + 128);
  *(_QWORD *)(result + 120) = v3;
  *(_QWORD *)(result + 128) = v2;
  if ( v4 )
  {
    v5 = v4[1] - 1LL;
    v4[1] = v5;
    if ( !v5 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v6 = v4[2] - 1LL;
      v4[2] = v6;
      if ( !v6 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
  return result;
}

