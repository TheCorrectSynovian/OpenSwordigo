/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B3264
 * Mangled: _ZN5Caver23DoorControllerComponent5CloseEv
 * Demangled: Caver::DoorControllerComponent::Close(void)
 *
 * Callers: 1
 *   0x00000000001F8B70  Caver::DoorControllerComponent::Close(void)
 *
 * Callees: 4
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD0F0  Caver::CollisionShapeComponent::SetEnabled(bool)
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *
 * Referenced strings: 38
 *   insn=0x00000000002B3274 string=0x00000000002B3278 "`N@"
 *   insn=0x00000000002B327C string=0x00000000002B3280 "`""
 *   insn=0x00000000002B327C string=0x00000000002B3294 ""
 *   insn=0x00000000002B3288 string=0x00000000002B328C "`N@"
 *   insn=0x00000000002B3288 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002B3290 string=0x00000000002B3300 "hZ@"
 *   insn=0x00000000002B3294 string=0x00000000002B3298 ""
 *   insn=0x00000000002B32A0 string=0x00000000002B32A4 "4"
 *   insn=0x00000000002B32A4 string=0x00000000002B32A8 "hN@"
 *   insn=0x00000000002B32AC string=0x00000000002B32B0 "I@"
 *   insn=0x00000000002B32AC string=0x00000000002B32C0 "t""
 *   insn=0x00000000002B32B4 string=0x00000000002B32B8 "\t"
 *   insn=0x00000000002B32CC string=0x00000000002B32D0 "iN@"
 *   insn=0x00000000002B32D4 string=0x00000000002B32D8 "(I@"
 *   insn=0x00000000002B32D8 string=0x00000000002B32DC "\n"
 *   insn=0x00000000002B32EC string=0x00000000002B32F0 "hN@"
 *   insn=0x00000000002B32F0 string=0x00000000002B32F4 "I@"
 *   insn=0x00000000002B32F8 string=0x00000000002B32FC "\t"
 *   insn=0x00000000002B3304 string=0x00000000002B3308 "`"
 *   insn=0x00000000002B3304 string=0x00000000002B331C "tB@"
 *   insn=0x00000000002B3310 string=0x00000000002B3314 "hZ@"
 *   insn=0x00000000002B3318 string=0x00000000002B3350 "h"
 *   insn=0x00000000002B331C string=0x00000000002B3320 "t"
 *   insn=0x00000000002B3320 string=0x00000000002B33AC "`"
 *   insn=0x00000000002B3328 string=0x00000000002B332C ""
 *   insn=0x00000000002B332C string=0x00000000002B3330 ""
 *   insn=0x00000000002B3330 string=0x00000000002B3334 "`Z@"
 *   insn=0x00000000002B3338 string=0x00000000002B333C "`"
 *   insn=0x00000000002B3344 string=0x00000000002B3348 "`Z@"
 *   insn=0x00000000002B334C string=0x00000000001F4FA0 "P'"
 *   insn=0x00000000002B3364 string=0x00000000002B3368 "s"
 *   insn=0x00000000002B3370 string=0x00000000002B3374 ""
 *   insn=0x00000000002B3374 string=0x00000000002B3378 "Q@"
 *   insn=0x00000000002B3388 string=0x00000000002B338C "Y'"
 *   insn=0x00000000002B338C string=0x00000000001FD0F0 "0'"
 *   insn=0x00000000002B33B4 string=0x00000000002B33B8 "tB@"
 *   insn=0x00000000002B33BC string=0x00000000002B33C0 "h"
 *   insn=0x00000000002B33D0 string=0x00000000002B33D4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DoorControllerComponent::Close(Caver::DoorControllerComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x20
  __int64 v7; // x8
  Caver::SoundEffectComponent *v8; // x0
  __int64 v9; // x8
  Caver::CollisionShapeComponent **v10; // x20
  Caver::CollisionShapeComponent **i; // x21

  v2 = *((_QWORD *)this + 19);
  if ( v2
    || (Caver::ComponentOutletBase::Connect((Caver::DoorControllerComponent *)((char *)this + 136), this),
        (v2 = *((_QWORD *)this + 19)) != 0) )
  {
    *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 264LL))(v2) + 52) = 1065353216;
    v3 = *((_QWORD *)this + 19);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 144);
      *(_BYTE *)(v4 + 57) = 1;
    }
    else
    {
      Caver::ComponentOutletBase::Connect((Caver::DoorControllerComponent *)((char *)this + 136), this);
      v5 = *((_QWORD *)this + 19);
      v4 = *(_QWORD *)(v5 + 144);
      *(_BYTE *)(v4 + 57) = 1;
      if ( !v5 )
      {
        Caver::ComponentOutletBase::Connect((Caver::DoorControllerComponent *)((char *)this + 136), this);
        v4 = *(_QWORD *)(*((_QWORD *)this + 19) + 144LL);
      }
    }
    *(_BYTE *)(v4 + 56) = 1;
  }
  if ( *((_QWORD *)this + 22)
    || (Caver::ComponentOutletBase::Connect((Caver::DoorControllerComponent *)((char *)this + 160), this),
        *((_QWORD *)this + 22)) )
  {
    v6 = (_QWORD *)*((_QWORD *)this + 16);
    if ( v6 )
    {
      v7 = v6[16];
      if ( v7 )
        goto LABEL_12;
    }
    else
    {
      Caver::ComponentOutletBase::Connect((Caver::DoorControllerComponent *)((char *)this + 112), this);
      v6 = (_QWORD *)*((_QWORD *)this + 16);
      v7 = v6[16];
      if ( v7 )
      {
LABEL_12:
        if ( !*(_BYTE *)(v7 + 318) )
          goto LABEL_16;
LABEL_13:
        v8 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 22);
        if ( !v8 )
        {
          Caver::ComponentOutletBase::Connect((Caver::DoorControllerComponent *)((char *)this + 160), this);
          v8 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 22);
        }
        Caver::SoundEffectComponent::Play(v8);
        goto LABEL_16;
      }
    }
    Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v6 + 14), (const Caver::Component *)v6);
    if ( !*(_BYTE *)(v6[16] + 318LL) )
      goto LABEL_16;
    goto LABEL_13;
  }
LABEL_16:
  v9 = *((_QWORD *)this + 5);
  *((_BYTE *)this + 208) = 0;
  v10 = *(Caver::CollisionShapeComponent ***)(v9 + 192);
  for ( i = *(Caver::CollisionShapeComponent ***)(v9 + 200); i != v10; ++v10 )
  {
    if ( ((*(__int64 (__fastcall **)(Caver::CollisionShapeComponent *, __int64 (__fastcall *(__fastcall *)(Caver::CollisionShapeComponent *))(Caver::CollisionShapeComponent *__hidden)))(*(_QWORD *)*v10 + 160LL))(
            *v10,
            Caver::CollisionShapeComponent::Interface)
        & 1) != 0 )
      Caver::CollisionShapeComponent::SetEnabled(*v10);
  }
}

