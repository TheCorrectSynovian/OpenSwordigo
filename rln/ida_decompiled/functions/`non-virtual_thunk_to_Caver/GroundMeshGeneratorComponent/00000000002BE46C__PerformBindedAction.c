/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BE46C
 * Mangled: _ZThn16_N5Caver28GroundMeshGeneratorComponent19PerformBindedActionEi
 * Demangled: `non-virtual thunk to'Caver::GroundMeshGeneratorComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x00000000001FE110  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002BE474 string=0x00000000002BE478 "?0"
 *   insn=0x00000000002BE480 string=0x00000000002BE484 "?,"
 *   insn=0x00000000002BE488 string=0x00000000002BE48C "i"
 *   insn=0x00000000002BE48C string=0x00000000002BE490 "`"
 *   insn=0x00000000002BE48C string=0x00000000001FCE30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver *__fastcall `non-virtual thunk to'Caver::GroundMeshGeneratorComponent::PerformBindedAction(Caver *this, int a2)
{
  Caver::GroundMeshGeneratorComponent *v2; // x19

  v2 = (Caver *)((char *)this - 16);
  if ( a2 != 12 )
  {
    if ( a2 != 11 )
      return this;
    *((_DWORD *)this + 50) = Caver::fastrandom(this);
  }
  return (Caver *)Caver::GroundMeshGeneratorComponent::GenerateMesh(v2);
}

