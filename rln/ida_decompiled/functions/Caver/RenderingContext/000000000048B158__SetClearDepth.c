/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B158
 * Mangled: _ZN5Caver16RenderingContext13SetClearDepthEf
 * Demangled: Caver::RenderingContext::SetClearDepth(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF300  .glClearDepthf
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetClearDepth(Caver::RenderingContext *this, float a2)
{
  return glClearDepthf();
}

