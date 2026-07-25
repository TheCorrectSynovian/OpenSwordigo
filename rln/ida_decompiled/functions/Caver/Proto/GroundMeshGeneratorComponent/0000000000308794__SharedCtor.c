/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000308794
 * Mangled: _ZN5Caver5Proto28GroundMeshGeneratorComponent10SharedCtorEv
 * Demangled: Caver::Proto::GroundMeshGeneratorComponent::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::GroundMeshGeneratorComponent::SharedCtor(
        Caver::Proto::GroundMeshGeneratorComponent *this)
{
  long double result; // q0

  *(_OWORD *)&result = 0u;
  *((_DWORD *)this + 14) = 0;
  *(_OWORD *)((char *)this + 40) = 0u;
  *(_OWORD *)((char *)this + 24) = 0u;
  *(_OWORD *)((char *)this + 8) = 0u;
  return result;
}

