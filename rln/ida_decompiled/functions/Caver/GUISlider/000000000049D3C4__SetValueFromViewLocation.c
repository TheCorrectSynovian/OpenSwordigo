/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049D3C4
 * Mangled: _ZN5Caver9GUISlider24SetValueFromViewLocationEf
 * Demangled: Caver::GUISlider::SetValueFromViewLocation(float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 11
 *   insn=0x000000000049D3D4 string=0x000000000049D3D8 "d($"
 *   insn=0x000000000049D3E0 string=0x000000000049D3E4 "C8!"
 *   insn=0x000000000049D3E8 string=0x000000000049D3EC " ( "
 *   insn=0x000000000049D3EC string=0x000000000049D3F0 ""
 *   insn=0x000000000049D3F4 string=0x000000000049D3F8 " L "
 *   insn=0x000000000049D3FC string=0x000000000049D400 "@"
 *   insn=0x000000000049D400 string=0x000000000049D404 "H"
 *   insn=0x000000000049D404 string=0x000000000049D40C "@  "
 *   insn=0x000000000049D40C string=0x000000000049D410 "@L "
 *   insn=0x000000000049D410 string=0x000000000049D414 "   "
 *   insn=0x000000000049D428 string=0x000000000049D42C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUISlider::SetValueFromViewLocation(__int64 this, float a2)
{
  float v2; // s1
  float v3; // s2
  float v4; // s0

  v2 = *(float *)(this + 308);
  v3 = *(float *)(this + 312);
  v4 = v2
     + (float)((float)((float)(a2 - *(float *)(this + 132))
                     / (float)((float)(*(float *)(this + 132) + *(float *)(this + 140)) - *(float *)(this + 132)))
             * (float)(v3 - v2));
  if ( v4 < v2 )
    v4 = *(float *)(this + 308);
  if ( v4 > v3 )
    v4 = *(float *)(this + 312);
  if ( *(_BYTE *)(this + 364) )
    v4 = roundf(v4);
  if ( v3 < v4 )
    v4 = *(float *)(this + 312);
  if ( v2 >= v4 )
    v4 = *(float *)(this + 308);
  *(_DWORD *)(this + 300) = 0;
  *(float *)(this + 292) = v4;
  *(float *)(this + 296) = v4;
  *(_BYTE *)(this + 352) = 1;
  return this;
}

