/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000271378
 * Mangled: _ZN5Caver15HealthComponent4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::HealthComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001FB800  Caver::HealthComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 16
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9730  Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FB1A0  Caver::RenderingContext::SetColor(Caver::Color const&)
 *   0x00000000001FCDA0  Caver::Sprite::Draw(Caver::RenderingContext *)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000200B90  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002716C4  Caver::HealthComponent::DrawHealthBar(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 81
 *   insn=0x000000000027138C string=0x0000000000271390 "X"
 *   insn=0x0000000000271390 string=0x0000000000271394 ""
 *   insn=0x000000000027139C string=0x00000000002713A0 "!"
 *   insn=0x00000000002713A4 string=0x00000000002713A8 "`"
 *   insn=0x00000000002713B4 string=0x00000000002713B8 "m"
 *   insn=0x00000000002713B8 string=0x00000000002713BC "h^@"
 *   insn=0x00000000002713B8 string=0x00000000002715A4 ""
 *   insn=0x00000000002713BC string=0x00000000002713C0 ""
 *   insn=0x00000000002713C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002713E8 string=0x00000000002713EC "v^"
 *   insn=0x00000000002713F0 string=0x00000000001FA350 "0'"
 *   insn=0x00000000002713F8 string=0x000000000058831A "particle_explosion"
 *   insn=0x0000000000271418 string=0x000000000027141C "e8"
 *   insn=0x0000000000271434 string=0x00000000001F9730 "0'"
 *   insn=0x000000000027143C string=0x0000000000271440 "@"
 *   insn=0x0000000000271440 string=0x0000000000271444 ""
 *   insn=0x0000000000271444 string=0x0000000000271448 ""
 *   insn=0x000000000027144C string=0x0000000000271450 ""
 *   insn=0x0000000000271450 string=0x0000000000271454 ""
 *   insn=0x0000000000271460 string=0x0000000000271464 ")"
 *   insn=0x0000000000271478 string=0x000000000027147C "`^@"
 *   insn=0x000000000027147C string=0x0000000000271480 "\t"
 *   insn=0x0000000000271488 string=0x000000000027148C ""
 *   insn=0x00000000002714A8 string=0x00000000002714AC "A"
 *   insn=0x00000000002714B8 string=0x00000000002714BC "B"
 *   insn=0x00000000002714DC string=0x00000000002714E0 "i"
 *   insn=0x00000000002714E4 string=0x00000000002714E8 "(9@"
 *   insn=0x00000000002714E8 string=0x00000000002714EC ")y@"
 *   insn=0x0000000000271500 string=0x0000000000271504 "c:"
 *   insn=0x0000000000271510 string=0x0000000000271514 "a"
 *   insn=0x0000000000271514 string=0x0000000000271518 "`"
 *   insn=0x0000000000271518 string=0x000000000027151C "b"
 *   insn=0x000000000027151C string=0x0000000000271520 "c"
 *   insn=0x0000000000271520 string=0x0000000000271524 "d"
 *   insn=0x0000000000271524 string=0x0000000000271528 "!"
 *   insn=0x0000000000271528 string=0x000000000027152C "B"
 *   insn=0x0000000000271530 string=0x0000000000271534 "c"
 *   insn=0x0000000000271538 string=0x000000000027153C "("
 *   insn=0x0000000000271544 string=0x0000000000271548 "I"
 *   insn=0x0000000000271554 string=0x0000000000271558 "k"
 *   insn=0x0000000000271558 string=0x000000000027155C ""
 *   insn=0x000000000027155C string=0x0000000000271560 "?"
 *   insn=0x0000000000271564 string=0x0000000000271568 ")"
 *   insn=0x0000000000271570 string=0x0000000000271574 "h"
 *   insn=0x0000000000271594 string=0x0000000000271598 "`^@"
 *   insn=0x0000000000271594 string=0x00000000001FB1A0 "0'"
 *   insn=0x00000000002715A0 string=0x00000000001FCDA0 "0'"
 *   insn=0x00000000002715B0 string=0x0000000000271610 "0"
 *   insn=0x00000000002715CC string=0x00000000002715D0 ")=G"
 *   insn=0x00000000002715D0 string=0x00000000002715D4 "!"
 *   insn=0x00000000002715D8 string=0x00000000002715DC "\t"
 *   insn=0x00000000002715D8 string=0x00000000002715F0 "\t"
 *   insn=0x00000000002715DC string=0x00000000002715E0 "*"
 *   insn=0x00000000002715E0 string=0x00000000002715E4 "\n"
 *   insn=0x00000000002715EC string=0x00000000002715FC "?"
 *   insn=0x00000000002715F0 string=0x00000000002715F4 "*"
 *   insn=0x00000000002715F4 string=0x00000000002715F8 "\n"
 *   insn=0x0000000000271604 string=0x0000000000271608 "g"
 *   insn=0x0000000000271610 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000027161C string=0x0000000000271620 "\t\t@"
 *   insn=0x0000000000271620 string=0x0000000000271624 ")"
 *   insn=0x0000000000271624 string=0x0000000000271628 "\t\t"
 *   insn=0x0000000000271628 string=0x000000000027162C "a"
 *   insn=0x000000000027162C string=0x0000000000271630 "\t"
 *   insn=0x0000000000271630 string=0x0000000000271634 ")"
 *   insn=0x0000000000271638 string=0x000000000027163C " "
 *   insn=0x000000000027165C string=0x0000000000271660 ")"
 *   insn=0x0000000000271670 string=0x0000000000271674 ")=G"
 *   insn=0x0000000000271674 string=0x0000000000271678 "!"
 *   insn=0x0000000000271678 string=0x000000000027167C "i"
 *   insn=0x000000000027167C string=0x0000000000271680 "\t"
 *   insn=0x000000000027167C string=0x00000000002716A8 "\t"
 *   insn=0x0000000000271680 string=0x0000000000271684 "*"
 *   insn=0x0000000000271684 string=0x0000000000271688 "\n"
 *   insn=0x000000000027168C string=0x0000000000271690 "?"
 *   insn=0x0000000000271690 string=0x0000000000271694 "L"
 *   insn=0x0000000000271698 string=0x000000000027169C "B"
 *   insn=0x00000000002716A8 string=0x00000000002716AC "*"
 *   insn=0x00000000002716AC string=0x00000000002716B0 "\n"
 *   insn=0x00000000002716B0 string=0x00000000002716B4 "?"
 *   insn=0x00000000002716B4 string=0x00000000002716B8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HealthComponent::Draw(__int64 this, Caver::RenderingContext *a2, const Caver::Matrix4 *a3)
{
  __int64 v3; // x19
  __int64 v6; // x0
  __int64 v7; // x0
  int v8; // w8
  void *v9; // x0
  Caver::Sprite *v10; // x0
  __int64 v11; // x8
  __int64 v12; // x9
  __int64 v13; // x8
  unsigned int v14; // s1
  float v15; // s0
  unsigned int v16; // s2
  unsigned int v17; // s3
  unsigned int v18; // s4
  int v19; // w8
  float v20; // s3
  int v21; // w9
  float v22; // s0
  char v23; // w8
  char v24; // w9
  unsigned int *v25; // x8
  int v26; // w9
  _OWORD v27[3]; // [xsp+10h] [xbp-C0h] BYREF
  __int64 v28; // [xsp+40h] [xbp-90h]
  int v29; // [xsp+48h] [xbp-88h]
  int v30; // [xsp+4Ch] [xbp-84h]
  _OWORD v31[4]; // [xsp+50h] [xbp-80h] BYREF
  __int64 v32; // [xsp+98h] [xbp-38h]

  v3 = this;
  v32 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(float *)(this + 172) > 0.0001 )
  {
    if ( !*(_QWORD *)(this + 184) )
    {
      v6 = operator new(0x58u);
      *(_DWORD *)(v6 + 48) = 0;
      *(_QWORD *)(v6 + 32) = 0;
      *(_QWORD *)(v6 + 40) = 0;
      *(_QWORD *)(v6 + 16) = 0;
      *(_QWORD *)(v6 + 24) = 0;
      *(_QWORD *)v6 = 0;
      *(_QWORD *)(v6 + 8) = 0;
      *(_BYTE *)(v6 + 80) = 0;
      *(_QWORD *)(v6 + 64) = 0;
      *(_QWORD *)(v6 + 72) = 0;
      *(_QWORD *)(v6 + 56) = 0;
      *(_QWORD *)(v3 + 184) = v6;
      Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)v6);
      sub_566BB8((int)v27, "particle_explosion");
      Caver::TextureLibrary::TextureForName();
      Caver::Sprite::Init();
      v7 = *(_QWORD *)&v31[0];
      if ( *(_QWORD *)&v31[0] )
      {
        v8 = *(_DWORD *)(*(_QWORD *)&v31[0] + 8LL) - 1;
        *(_DWORD *)(*(_QWORD *)&v31[0] + 8LL) = v8;
        if ( !v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      }
      v9 = (void *)(*(_QWORD *)&v27[0] - 24LL);
      if ( (__int64 *)(*(_QWORD *)&v27[0] - 24LL) != &qword_6FD2E0 )
      {
        v25 = (unsigned int *)(*(_QWORD *)&v27[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v26 = __ldaxr(v25);
          while ( __stlxr(v26 - 1, v25) );
        }
        else
        {
          v26 = (*v25)--;
        }
        if ( v26 <= 0 )
          operator delete(v9);
      }
      v10 = *(Caver::Sprite **)(v3 + 184);
      v31[0] = xmmword_5882D0;
      v11 = *(_QWORD *)v10;
      LODWORD(v27[0]) = -1;
      Caver::Sprite::AddRectangle(
        v10,
        (const Caver::Rectangle *)v31,
        (const Caver::Rectangle *)(v11 + 92),
        (const Caver::Color *)v27);
    }
    v31[3] = *((_OWORD *)a3 + 3);
    v31[2] = *((_OWORD *)a3 + 2);
    v31[1] = *((_OWORD *)a3 + 1);
    v31[0] = *(_OWORD *)a3;
    v12 = *(_QWORD *)(v3 + 40);
    v13 = *(_QWORD *)(v12 + 112);
    LODWORD(v12) = *(_DWORD *)(v12 + 120);
    v27[0] = xmmword_583490;
    v27[1] = xmmword_5837E0;
    v27[2] = xmmword_5837F0;
    v28 = v13;
    v29 = v12;
    v30 = 1065353216;
    C_Matrix4Mul((const float *)v31, (const float *)v27, (float *)v31);
    Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)v31);
    LOBYTE(v14) = *(_BYTE *)(v3 + 180);
    v15 = *(float *)(v3 + 176);
    LOBYTE(v16) = *(_BYTE *)(v3 + 181);
    LOBYTE(v17) = *(_BYTE *)(v3 + 182);
    LOBYTE(v18) = *(_BYTE *)(v3 + 183);
    v19 = (int)(float)(v15 * (float)v14);
    v20 = v15 * (float)v17;
    v21 = (int)(float)(v15 * (float)v16);
    v22 = v15 * (float)v18;
    if ( v19 >= 255 )
      LOBYTE(v19) = -1;
    if ( v21 >= 255 )
      LOBYTE(v21) = -1;
    LOBYTE(v27[0]) = v19;
    if ( (int)v20 >= 255 )
      v23 = -1;
    else
      v23 = (int)v20;
    BYTE1(v27[0]) = v21;
    if ( (int)v22 >= 255 )
      v24 = -1;
    else
      v24 = (int)v22;
    BYTE2(v27[0]) = v23;
    BYTE3(v27[0]) = v24;
    Caver::RenderingContext::SetColor(a2, (const Caver::Color *)v27);
    return Caver::Sprite::Draw(*(Caver::Sprite **)(v3 + 184), a2);
  }
  return this;
}

