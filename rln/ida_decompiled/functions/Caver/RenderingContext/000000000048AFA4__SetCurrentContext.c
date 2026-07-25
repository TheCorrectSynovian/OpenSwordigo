/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048AFA4
 * Mangled: _ZN5Caver16RenderingContext17SetCurrentContextEPS0_
 * Demangled: Caver::RenderingContext::SetCurrentContext(Caver::RenderingContext*)
 *
 * Callers: 1
 *   0x00000000001FE790  Caver::RenderingContext::SetCurrentContext(Caver::RenderingContext*)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::SetCurrentContext(__int64 this, Caver::RenderingContext *a2)
{
  qword_6E9DD0 = this;
  return this;
}

