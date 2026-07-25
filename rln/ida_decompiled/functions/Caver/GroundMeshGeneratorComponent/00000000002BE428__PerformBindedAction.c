/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BE428
 * Mangled: _ZN5Caver28GroundMeshGeneratorComponent19PerformBindedActionEi
 * Demangled: Caver::GroundMeshGeneratorComponent::PerformBindedAction(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *   0x00000000001FE110  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002BE430 string=0x00000000002BE434 "?0"
 *   insn=0x00000000002BE43C string=0x00000000002BE440 "?,"
 *   insn=0x00000000002BE444 string=0x00000000002BE448 "z"
 *   insn=0x00000000002BE448 string=0x00000000002BE44C "`"
 *   insn=0x00000000002BE448 string=0x00000000001FCE30 "0'"
 *   insn=0x00000000002BE458 string=0x00000000002BE45C "-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GroundMeshGeneratorComponent *__fastcall Caver::GroundMeshGeneratorComponent::PerformBindedAction(
        Caver::GroundMeshGeneratorComponent *this,
        int a2)
{
  Caver::GroundMeshGeneratorComponent *v2; // x19

  v2 = this;
  if ( a2 != 12 )
  {
    if ( a2 != 11 )
      return this;
    *((_DWORD *)this + 54) = Caver::fastrandom(this);
  }
  return (Caver::GroundMeshGeneratorComponent *)Caver::GroundMeshGeneratorComponent::GenerateMesh(v2);
}

