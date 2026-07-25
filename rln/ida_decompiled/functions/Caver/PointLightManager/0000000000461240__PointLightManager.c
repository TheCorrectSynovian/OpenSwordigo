/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000461240
 * Mangled: _ZN5Caver17PointLightManagerC2Ev
 * Demangled: Caver::PointLightManager::PointLightManager(void)
 *
 * Callers: 2
 *   0x00000000001F6490  Caver::PointLightManager::PointLightManager(void)
 *   0x0000000000461208  Caver::ObjectTemplate::~ObjectTemplate()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::PointLightManager::PointLightManager(Caver::PointLightManager *this)
{
  long double result; // q0

  *(_OWORD *)&result = 0u;
  *(_OWORD *)this = 0u;
  *((_OWORD *)this + 1) = 0u;
  return result;
}

