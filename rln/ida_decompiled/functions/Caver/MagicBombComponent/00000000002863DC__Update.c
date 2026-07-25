/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002863DC
 * Mangled: _ZN5Caver18MagicBombComponent6UpdateEf
 * Demangled: Caver::MagicBombComponent::Update(float)
 *
 * Callers: 2
 *   0x00000000001FBFB0  Caver::MagicBombComponent::Update(float)
 *   0x0000000000285EF8  Caver::MagicBombComponent::Cast(void)
 *
 * Callees: 2
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001FE250  Caver::MagicBombComponent::Explode(void)
 *
 * Referenced strings: 48
 *   insn=0x00000000002863E8 string=0x00000000002863EC "a"
 *   insn=0x00000000002863EC string=0x00000000002863F0 "hf@"
 *   insn=0x00000000002863F0 string=0x00000000002863F4 "!( "
 *   insn=0x00000000002863F4 string=0x00000000002863F8 "a"
 *   insn=0x00000000002863FC string=0x0000000000286400 "c"
 *   insn=0x00000000002863FC string=0x000000000028644C "b"
 *   insn=0x0000000000286400 string=0x0000000000286404 "b"
 *   insn=0x0000000000286408 string=0x000000000028640C "$5D"
 *   insn=0x000000000028640C string=0x0000000000286410 "`( "
 *   insn=0x0000000000286410 string=0x0000000000286414 "C8!"
 *   insn=0x0000000000286414 string=0x0000000000286418 "`"
 *   insn=0x0000000000286418 string=0x000000000028641C "c"
 *   insn=0x0000000000286420 string=0x0000000000286424 "\t"
 *   insn=0x0000000000286424 string=0x0000000000286428 "e%"
 *   insn=0x000000000028642C string=0x0000000000286430 "h  "
 *   insn=0x0000000000286438 string=0x000000000028643C "\t"
 *   insn=0x000000000028643C string=0x0000000000286440 "m"
 *   insn=0x0000000000286440 string=0x000000000028646C "  ""
 *   insn=0x0000000000286444 string=0x0000000000286448 ""
 *   insn=0x000000000028644C string=0x0000000000286450 "  ""
 *   insn=0x0000000000286450 string=0x0000000000286454 "\n"
 *   insn=0x0000000000286454 string=0x0000000000286458 "+"
 *   insn=0x0000000000286454 string=0x0000000000286474 "hv@"
 *   insn=0x0000000000286460 string=0x0000000000286464 "\t"
 *   insn=0x0000000000286478 string=0x000000000028647C "i"
 *   insn=0x0000000000286484 string=0x0000000000286488 "A"
 *   insn=0x0000000000286488 string=0x000000000028648C " q@"
 *   insn=0x0000000000286494 string=0x0000000000286498 "B"
 *   insn=0x0000000000286498 string=0x000000000028649C "@ !"
 *   insn=0x000000000028649C string=0x00000000002864A0 "\t"
 *   insn=0x00000000002864A0 string=0x00000000002864A4 "*u@"
 *   insn=0x00000000002864A0 string=0x00000000002864C0 ""u@"
 *   insn=0x00000000002864A8 string=0x00000000002864AC ""
 *   insn=0x00000000002864B8 string=0x00000000002864BC "e"
 *   insn=0x00000000002864C4 string=0x00000000002864C8 "#MG"
 *   insn=0x00000000002864C8 string=0x00000000002864CC "C8#"
 *   insn=0x00000000002864CC string=0x00000000002864D0 "c"
 *   insn=0x00000000002864D0 string=0x00000000002864D4 "` !"
 *   insn=0x00000000002864D8 string=0x00000000002864DC "J"
 *   insn=0x00000000002864D8 string=0x00000000002864F0 ""
 *   insn=0x00000000002864E0 string=0x00000000002864E4 "*"
 *   insn=0x00000000002864E8 string=0x00000000002864EC ")"
 *   insn=0x00000000002864F4 string=0x00000000002864F8 "h"
 *   insn=0x00000000002864FC string=0x0000000000286500 "\t"
 *   insn=0x0000000000286510 string=0x0000000000286514 "#"
 *   insn=0x0000000000286514 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000028651C string=0x0000000000286520 "hv@"
 *   insn=0x0000000000286520 string=0x0000000000286524 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicBombComponent::Update(Caver::MagicBombComponent *this, float a2)
{
  __int64 v3; // x8
  float v4; // s1
  float v5; // s2
  float v6; // s0
  float v7; // s3
  float v8; // s3
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x20
  float v12; // s0
  float v13; // w10
  float *v14; // x9
  float v15; // s2

  v3 = *((_QWORD *)this + 25);
  v4 = *((float *)this + 47) + a2;
  *((float *)this + 47) = v4;
  if ( !v3 )
  {
    if ( v4 < *((float *)this + 48) )
      return;
    goto LABEL_14;
  }
  v5 = *((float *)this + 48);
  v6 = *((float *)this + 56) + a2;
  *((float *)this + 56) = v6;
  v7 = (float)(v5 - v4) / v5;
  if ( v7 >= 0.0 )
    v8 = (float)(v7 * 0.5) + 0.1;
  else
    v8 = 0.1;
  if ( *(_BYTE *)(v3 + 309) )
  {
    if ( v6 <= v8 )
      goto LABEL_13;
    *(_BYTE *)(v3 + 309) = 0;
  }
  else
  {
    if ( v6 <= v8 )
      goto LABEL_13;
    *(_BYTE *)(v3 + 309) = 1;
  }
  *((_DWORD *)this + 56) = 0;
LABEL_13:
  if ( v4 < v5 )
    return;
LABEL_14:
  v9 = *((_QWORD *)this + 29);
  if ( !v9 )
  {
    Caver::MagicBombComponent::Explode(this);
    return;
  }
  v10 = *((_QWORD *)this + 5);
  v11 = *(_QWORD *)(v9 + 40);
  v12 = *(float *)(v10 + 112);
  if ( fabsf(v12 - *(float *)(v11 + 112)) <= 0.0001 )
  {
    v15 = *(float *)(v10 + 116);
    v14 = (float *)(v11 + 116);
    if ( fabsf(v15 - *(float *)(v11 + 116)) <= 0.0001 )
      goto LABEL_21;
    v13 = v15;
  }
  else
  {
    v13 = *(float *)(v10 + 116);
    v14 = (float *)(v11 + 116);
  }
  *(float *)(v11 + 112) = v12;
  *v14 = v13;
  if ( *(_BYTE *)(v11 + 180) )
  {
LABEL_21:
    if ( *(_BYTE *)(v9 + 240) )
      return;
    goto LABEL_22;
  }
  Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v11);
  *(_BYTE *)(v11 + 180) = 1;
  if ( !*(_BYTE *)(*((_QWORD *)this + 29) + 240LL) )
LABEL_22:
    *(_BYTE *)(*((_QWORD *)this + 5) + 232LL) = 1;
}

