/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DE408
 * Mangled: _ZN5Caver11ItemOverlay6UpdateEf
 * Demangled: Caver::ItemOverlay::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF530  Caver::ItemOverlay::UpdateSprites(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000003DE408 string=0x00000000003DE40C "h"
 *   insn=0x00000000003DE410 string=0x00000000003DE414 "G"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::ItemOverlay *__fastcall Caver::ItemOverlay::Update(Caver::ItemOverlay *this, float a2)
{
  if ( *((_BYTE *)this + 256) )
  {
    *((_BYTE *)this + 256) = 0;
    return (Caver::ItemOverlay *)Caver::ItemOverlay::UpdateSprites(this);
  }
  return this;
}

