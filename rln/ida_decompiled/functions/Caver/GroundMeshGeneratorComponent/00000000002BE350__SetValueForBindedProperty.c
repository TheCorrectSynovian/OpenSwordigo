/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BE350
 * Mangled: _ZN5Caver28GroundMeshGeneratorComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::GroundMeshGeneratorComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FB0D0  Caver::GroundMeshGeneratorComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 2
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FE110  Caver::GroundMeshGeneratorComponent::GenerateMesh(void)
 *
 * Referenced strings: 29
 *   insn=0x00000000002BE36C string=0x00000000002BE370 "I"
 *   insn=0x00000000002BE370 string=0x00000000002BE378 "(y"
 *   insn=0x00000000002BE370 string=0x0000000000589E2C "XE"
 *   insn=0x00000000002BE378 string=0x00000000002BE37C ""
 *   insn=0x00000000002BE380 string=0x00000000002BE384 "H"
 *   insn=0x00000000002BE380 string=0x00000000002BE394 "H"
 *   insn=0x00000000002BE380 string=0x00000000002BE3A4 "H"
 *   insn=0x00000000002BE380 string=0x00000000002BE3B4 "H"
 *   insn=0x00000000002BE380 string=0x00000000002BE3E4 "H"
 *   insn=0x00000000002BE380 string=0x00000000002BE3F4 "H"
 *   insn=0x00000000002BE380 string=0x00000000002BE404 "H"
 *   insn=0x00000000002BE384 string=0x00000000002BE388 ""
 *   insn=0x00000000002BE388 string=0x00000000002BE38C "h"
 *   insn=0x00000000002BE38C string=0x00000000002BE390 " "
 *   insn=0x00000000002BE394 string=0x00000000002BE398 ""
 *   insn=0x00000000002BE398 string=0x00000000002BE39C "h"
 *   insn=0x00000000002BE3A4 string=0x00000000002BE3A8 ""
 *   insn=0x00000000002BE3A8 string=0x00000000002BE3AC "h"
 *   insn=0x00000000002BE3B4 string=0x00000000002BE3B8 ""
 *   insn=0x00000000002BE3B8 string=0x00000000002BE3BC "h"
 *   insn=0x00000000002BE3CC string=0x00000000001F9320 "0'"
 *   insn=0x00000000002BE3E4 string=0x00000000002BE3E8 ""
 *   insn=0x00000000002BE3E8 string=0x00000000002BE3EC "h"
 *   insn=0x00000000002BE3EC string=0x00000000002BE3F0 ""
 *   insn=0x00000000002BE3F4 string=0x00000000002BE3F8 ""
 *   insn=0x00000000002BE3F8 string=0x00000000002BE3FC "h"
 *   insn=0x00000000002BE404 string=0x00000000002BE408 ""
 *   insn=0x00000000002BE408 string=0x00000000002BE40C "h"
 *   insn=0x00000000002BE418 string=0x00000000002BE41C "="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundMeshGeneratorComponent::SetValueForBindedProperty(
        Caver::GroundMeshGeneratorComponent *this,
        unsigned int a2,
        const Caver::BindingValue *a3)
{
  __int64 result; // x0

  switch ( a2 )
  {
    case 4u:
      *((_DWORD *)this + 52) = **((_DWORD **)a3 + 1);
      return Caver::GroundMeshGeneratorComponent::GenerateMesh(this);
    case 5u:
      *((_DWORD *)this + 53) = **((_DWORD **)a3 + 1);
      return Caver::GroundMeshGeneratorComponent::GenerateMesh(this);
    case 6u:
      *((_DWORD *)this + 54) = **((_DWORD **)a3 + 1);
      return Caver::GroundMeshGeneratorComponent::GenerateMesh(this);
    case 7u:
      *((_DWORD *)this + 55) = **((_DWORD **)a3 + 1);
      return Caver::GroundMeshGeneratorComponent::GenerateMesh(this);
    case 8u:
      *((_DWORD *)this + 56) = **((_DWORD **)a3 + 1);
      return Caver::GroundMeshGeneratorComponent::GenerateMesh(this);
    case 9u:
      *((_DWORD *)this + 57) = **((_DWORD **)a3 + 1);
      return Caver::GroundMeshGeneratorComponent::GenerateMesh(this);
    case 0xAu:
      *((_DWORD *)this + 58) = **((_DWORD **)a3 + 1);
      return Caver::GroundMeshGeneratorComponent::GenerateMesh(this);
    default:
      result = Caver::Component::SetValueForBindedProperty(this, a2, a3);
      if ( a2 > 3 )
        return result;
      return Caver::GroundMeshGeneratorComponent::GenerateMesh(this);
  }
}

