/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CB43C
 * Mangled: _ZN5Caver19WeaponGlowComponent21UpdateParticleEmitterEv
 * Demangled: Caver::WeaponGlowComponent::UpdateParticleEmitter(void)
 *
 * Callers: 1
 *   0x00000000001FD490  Caver::WeaponGlowComponent::UpdateParticleEmitter(void)
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000002024F0  Caver::ParticleEmitterComponent::SetColor(Caver::FloatColor const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 64
 *   insn=0x00000000002CB458 string=0x00000000002CB45C "W"
 *   insn=0x00000000002CB47C string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002CB494 string=0x00000000002CB498 "!"
 *   insn=0x00000000002CB498 string=0x00000000002CB49C "@"
 *   insn=0x00000000002CB4C4 string=0x00000000002CB4C8 "h"
 *   insn=0x00000000002CB4C8 string=0x00000000002CB4CC ""
 *   insn=0x00000000002CB4CC string=0x00000000002CB4D0 "h"
 *   insn=0x00000000002CB4D4 string=0x00000000002CB570 "3"
 *   insn=0x00000000002CB4D8 string=0x00000000002CB4DC "\t@"
 *   insn=0x00000000002CB4E8 string=0x00000000002CB4EC "!"
 *   insn=0x00000000002CB4F0 string=0x00000000005846C0 "ff"
 *   insn=0x00000000002CB51C string=0x00000000002CB520 "h\t"
 *   insn=0x00000000002CB520 string=0x00000000002CB524 ""
 *   insn=0x00000000002CB528 string=0x00000000002CB52C "A)("
 *   insn=0x00000000002CB52C string=0x00000000002CB530 "\t"
 *   insn=0x00000000002CB530 string=0x00000000002CB534 "  "
 *   insn=0x00000000002CB548 string=0x00000000002CB54C "H"
 *   insn=0x00000000002CB550 string=0x00000000002CB554 " "
 *   insn=0x00000000002CB554 string=0x00000000002CB558 "A)("
 *   insn=0x00000000002CB558 string=0x00000000002CB55C "  "
 *   insn=0x00000000002CB570 string=0x00000000002CB574 "h"
 *   insn=0x00000000002CB574 string=0x00000000002CB578 ""
 *   insn=0x00000000002CB578 string=0x00000000002CB57C "h"
 *   insn=0x00000000002CB580 string=0x00000000002CB584 "h"
 *   insn=0x00000000002CB588 string=0x00000000002CB58C "\t@"
 *   insn=0x00000000002CB590 string=0x00000000002CB594 "h\n@"
 *   insn=0x00000000002CB594 string=0x00000000002CB598 ""
 *   insn=0x00000000002CB598 string=0x00000000002CB59C "h\n"
 *   insn=0x00000000002CB5A0 string=0x00000000002CB5A4 "h"
 *   insn=0x00000000002CB5A8 string=0x00000000002CB5AC "@"
 *   insn=0x00000000002CB5E4 string=0x00000000002CB5E8 "@"
 *   insn=0x00000000002CB600 string=0x00000000001F8570 "0'"
 *   insn=0x00000000002CB608 string=0x00000000002CB60C "h"
 *   insn=0x00000000002CB60C string=0x00000000002CB618 "6"
 *   insn=0x00000000002CB610 string=0x00000000002CB614 "S"
 *   insn=0x00000000002CB614 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002CB620 string=0x00000000002CB624 ""
 *   insn=0x00000000002CB64C string=0x00000000002CB650 "@"
 *   insn=0x00000000002CB670 string=0x00000000002CB674 "h"
 *   insn=0x00000000002CB674 string=0x00000000002CB680 "6"
 *   insn=0x00000000002CB678 string=0x00000000002CB67C "9"
 *   insn=0x00000000002CB688 string=0x00000000002CB68C ""
 *   insn=0x00000000002CB6B4 string=0x00000000002CB6B8 "@"
 *   insn=0x00000000002CB6D8 string=0x00000000002CB6DC "h"
 *   insn=0x00000000002CB6DC string=0x00000000002CB6E8 "5"
 *   insn=0x00000000002CB6F0 string=0x00000000002CB6F4 ""
 *   insn=0x00000000002CB71C string=0x00000000002CB720 "|"
 *   insn=0x00000000002CB734 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002CB738 string=0x00000000002CB73C "S"
 *   insn=0x00000000002CB73C string=0x00000000002CB764 "h"
 *   insn=0x00000000002CB75C string=0x00000000002CB760 "3"
 *   insn=0x00000000002CB764 string=0x00000000002CB768 ""
 *   insn=0x00000000002CB768 string=0x00000000002CB76C "h"
 *   insn=0x00000000002CB770 string=0x00000000002CB774 "h"
 *   insn=0x00000000002CB774 string=0x00000000002CB778 "\t@"
 *   insn=0x00000000002CB780 string=0x00000000002CB784 "h\n@"
 *   insn=0x00000000002CB784 string=0x00000000002CB788 ""
 *   insn=0x00000000002CB788 string=0x00000000002CB78C "h\n"
 *   insn=0x00000000002CB790 string=0x00000000002CB794 "h"
 *   insn=0x00000000002CB794 string=0x00000000002CB798 "@"
 *   insn=0x00000000002CB7A4 string=0x00000000002CB7A8 "G"
 *   insn=0x00000000002CB7AC string=0x00000000002CB7B0 " "
 *   insn=0x00000000002CB7B4 string=0x00000000002CB7B8 ""
 *   insn=0x00000000002CB7B8 string=0x00000000002CB7BC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WeaponGlowComponent::UpdateParticleEmitter(Caver::WeaponGlowComponent *this)
{
  Caver::ParticleEmitterComponent *v2; // x0
  float v3; // s0
  unsigned __int64 v4; // d1
  unsigned __int64 v5; // d0
  __int64 v6; // x8
  _QWORD *v7; // x19
  __int64 v8; // x20
  float v9; // s8
  float *v10; // x8
  float v11; // s10
  float v12; // s10
  __int64 v13; // x8
  __int64 v14; // x8
  unsigned int v15; // w22
  __int64 v16; // x24
  __int64 v17; // x0
  void *v18; // x8
  __int64 v19; // x22
  float v20; // s0
  unsigned int v21; // w22
  __int64 v22; // x24
  __int64 v23; // x0
  void *v24; // x8
  __int64 v25; // x22
  float v26; // s0
  unsigned int v27; // w21
  __int64 v28; // x22
  __int64 v29; // x0
  void *v30; // x8
  __int64 v31; // x21
  float v32; // s0
  _QWORD v33[3]; // [xsp+8h] [xbp-68h] BYREF

  v33[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (Caver::ParticleEmitterComponent *)*((_QWORD *)this + 19);
  if ( v2
    || (Caver::ComponentOutletBase::Connect((Caver::WeaponGlowComponent *)((char *)this + 136), this),
        (v2 = (Caver::ParticleEmitterComponent *)*((_QWORD *)this + 19)) != 0) )
  {
    v3 = *((float *)this + 59);
    v4 = vmul_n_f32(*(float32x2_t *)((char *)this + 164), v3).n64_u64[0];
    v5 = vmul_n_f32(*(float32x2_t *)((char *)this + 172), v3).n64_u64[0];
    v33[0] = v4;
    v33[1] = v5;
    Caver::ParticleEmitterComponent::SetColor(v2, (const Caver::FloatColor *)v33);
    v6 = *((_QWORD *)this + 19);
    if ( !v6 )
    {
      Caver::ComponentOutletBase::Connect((Caver::WeaponGlowComponent *)((char *)this + 136), this);
      v6 = *((_QWORD *)this + 19);
    }
    v8 = *(_QWORD *)(v6 + 344);
    v7 = *(_QWORD **)(v6 + 352);
    if ( v7 )
      ++v7[1];
    if ( v8 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8) == 5 )
    {
      v9 = *((float *)this + 60);
      v10 = *(float **)(v8 + 200);
      *(_DWORD *)(v8 + 60) = 0;
      *(_DWORD *)(v8 + 64) = 0;
      *(float *)(v8 + 56) = v9 * 0.45;
      if ( !v10 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
        v16 = v15;
        v17 = operator new[](4LL * v15);
        v18 = *(void **)(v8 + 200);
        *(_QWORD *)(v8 + 200) = v17;
        if ( v18 )
          operator delete[](v18);
        if ( v15 )
        {
          v19 = 0;
          do
          {
            v20 = (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, (unsigned int)v19);
            v10 = *(float **)(v8 + 200);
            v10[v19++] = v20;
          }
          while ( v16 != v19 );
        }
        else
        {
          v10 = *(float **)(v8 + 200);
        }
      }
      v10[3] = v9 + -15.0;
      v11 = *((float *)this + 61);
      if ( !v10 )
      {
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
        v22 = v21;
        v23 = operator new[](4LL * v21);
        v24 = *(void **)(v8 + 200);
        *(_QWORD *)(v8 + 200) = v23;
        if ( v24 )
          operator delete[](v24);
        if ( v21 )
        {
          v25 = 0;
          do
          {
            v26 = (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, (unsigned int)v25);
            v10 = *(float **)(v8 + 200);
            v10[v25++] = v26;
          }
          while ( v22 != v25 );
        }
        else
        {
          v10 = *(float **)(v8 + 200);
        }
      }
      v10[5] = (float)((float)((float)(v11 + -10.0) * 15.0) / 6.0) + 20.0;
      v12 = *((float *)this + 61);
      if ( !v10 )
      {
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
        v28 = v27;
        v29 = operator new[](4LL * v27);
        v30 = *(void **)(v8 + 200);
        *(_QWORD *)(v8 + 200) = v29;
        if ( v30 )
          operator delete[](v30);
        if ( v27 )
        {
          v31 = 0;
          do
          {
            v32 = (*(float (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, (unsigned int)v31);
            v10 = *(float **)(v8 + 200);
            v10[v31++] = v32;
          }
          while ( v28 != v31 );
        }
        else
        {
          v10 = *(float **)(v8 + 200);
        }
      }
      v10[8] = (float)((float)((float)(v12 + -10.0) * 0.05) / 6.0) + 0.25;
    }
    if ( v7 )
    {
      v13 = v7[1] - 1LL;
      v7[1] = v13;
      if ( !v13 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
        v14 = v7[2] - 1LL;
        v7[2] = v14;
        if ( !v14 )
          (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
      }
    }
  }
}

