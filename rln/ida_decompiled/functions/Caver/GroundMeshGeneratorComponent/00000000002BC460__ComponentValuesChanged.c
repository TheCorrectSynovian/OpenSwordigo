/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BC460
 * Mangled: _ZN5Caver28GroundMeshGeneratorComponent22ComponentValuesChangedEPNS_9ComponentE
 * Demangled: Caver::GroundMeshGeneratorComponent::ComponentValuesChanged(Caver::Component *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FE110  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *
 * Referenced strings: 11
 *   insn=0x00000000002BC46C string=0x00000000002BC470 "hZ@"
 *   insn=0x00000000002BC474 string=0x00000000002BC478 ""
 *   insn=0x00000000002BC478 string=0x00000000002BC498 "`"
 *   insn=0x00000000002BC480 string=0x00000000002BC484 "hf@"
 *   insn=0x00000000002BC484 string=0x00000000002BC488 "h"
 *   insn=0x00000000002BC488 string=0x00000000002BC4B4 "`"
 *   insn=0x00000000002BC4A0 string=0x00000000002BC4A4 "hZ@"
 *   insn=0x00000000002BC4A0 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002BC4AC string=0x00000000002BC4B0 "\n"
 *   insn=0x00000000002BC4BC string=0x00000000002BC4C0 "hf@"
 *   insn=0x00000000002BC4E0 string=0x00000000002BC4E4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::GroundMeshGeneratorComponent::ComponentValuesChanged(_QWORD *this, Caver::Component *a2)
{
  __int64 v2; // x19
  Caver::Component *v3; // x8
  Caver::Component *v5; // x8

  v2 = (__int64)this;
  v3 = (Caver::Component *)this[22];
  if ( v3 )
  {
    if ( v3 == a2 )
      return (_QWORD *)Caver::GroundMeshGeneratorComponent::GenerateMesh((Caver::GroundMeshGeneratorComponent *)v2);
  }
  else
  {
    this = (_QWORD *)Caver::ComponentOutletBase::Connect(
                       (Caver::ComponentOutletBase *)(this + 20),
                       (const Caver::Component *)this);
    if ( *(Caver::Component **)(v2 + 176) == a2 )
      return (_QWORD *)Caver::GroundMeshGeneratorComponent::GenerateMesh((Caver::GroundMeshGeneratorComponent *)v2);
  }
  v5 = *(Caver::Component **)(v2 + 200);
  if ( !v5 )
  {
    this = (_QWORD *)Caver::ComponentOutletBase::Connect(
                       (Caver::ComponentOutletBase *)(v2 + 184),
                       (const Caver::Component *)v2);
    if ( *(Caver::Component **)(v2 + 200) != a2 )
      return this;
    return (_QWORD *)Caver::GroundMeshGeneratorComponent::GenerateMesh((Caver::GroundMeshGeneratorComponent *)v2);
  }
  if ( v5 == a2 )
    return (_QWORD *)Caver::GroundMeshGeneratorComponent::GenerateMesh((Caver::GroundMeshGeneratorComponent *)v2);
  return this;
}

