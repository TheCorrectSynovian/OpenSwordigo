/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B2D44
 * Mangled: _ZN5Caver23DoorControllerComponent7SetOpenEb
 * Demangled: Caver::DoorControllerComponent::SetOpen(bool)
 *
 * Callers: 1
 *   0x00000000001F3CB0  Caver::DoorControllerComponent::SetOpen(bool)
 *
 * Callees: 4
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8B70  Caver::DoorControllerComponent::Close(void)
 *   0x00000000001FED40  Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *   0x0000000000200AD0  Caver::DoorControllerComponent::Open(void)
 *
 * Referenced strings: 17
 *   insn=0x00000000002B2D5C string=0x00000000002B2D60 "\7"
 *   insn=0x00000000002B2D60 string=0x00000000002B2D64 "`N@"
 *   insn=0x00000000002B2D64 string=0x00000000002B2D68 "@"
 *   insn=0x00000000002B2D68 string=0x00000000002B2D90 ""
 *   insn=0x00000000002B2D6C string=0x00000000002B2D7C "`""
 *   insn=0x00000000002B2D70 string=0x00000000002B2D74 "`N@"
 *   insn=0x00000000002B2D70 string=0x00000000001F8B70 "0'"
 *   insn=0x00000000002B2D80 string=0x00000000002B2D84 "W"
 *   insn=0x00000000002B2D84 string=0x00000000002B2D88 "`N@"
 *   insn=0x00000000002B2D84 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002B2D90 string=0x00000000002B2D94 ""
 *   insn=0x00000000002B2DA4 string=0x00000000002B2DA8 "tN@"
 *   insn=0x00000000002B2DAC string=0x00000000002B2DB0 "`""
 *   insn=0x00000000002B2DB4 string=0x00000000002B2DB8 "J"
 *   insn=0x00000000002B2DB8 string=0x00000000002B2DBC "tN@"
 *   insn=0x00000000002B2DC0 string=0x00000000002B2DC4 "@"
 *   insn=0x00000000002B2DD4 string=0x00000000002B2DD8 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::KeyframeAnimationComponent *__fastcall Caver::DoorControllerComponent::SetOpen(
        Caver::KeyframeAnimationComponent **this,
        char a2)
{
  Caver::KeyframeAnimationComponent *result; // x0
  __int64 v5; // x21
  int v6; // s0
  Caver::KeyframeAnimationComponent *v7; // x20
  __int64 v8; // x8

  if ( (a2 & 1) != 0 )
  {
    Caver::DoorControllerComponent::Open((Caver::DoorControllerComponent *)this);
    result = this[19];
    if ( !result )
    {
LABEL_5:
      Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(this + 17), (const Caver::Component *)this);
      result = this[19];
      if ( !result )
        return result;
    }
  }
  else
  {
    Caver::DoorControllerComponent::Close((Caver::DoorControllerComponent *)this);
    result = this[19];
    if ( !result )
      goto LABEL_5;
  }
  result = (Caver::KeyframeAnimationComponent *)(*(__int64 (__fastcall **)(Caver::KeyframeAnimationComponent *))(*(_QWORD *)result + 264LL))(result);
  v5 = (__int64)result;
  v6 = 0;
  if ( (a2 & 1) != 0 )
  {
    v7 = this[19];
    if ( !v7 )
    {
      result = (Caver::KeyframeAnimationComponent *)Caver::ComponentOutletBase::Connect(
                                                      (Caver::ComponentOutletBase *)(this + 17),
                                                      (const Caver::Component *)this);
      v7 = this[19];
    }
    v8 = *(_QWORD *)(*((_QWORD *)v7 + 18) + 24LL);
    if ( !v8 )
    {
      result = (Caver::KeyframeAnimationComponent *)Caver::KeyframeAnimationComponent::LoadAnimation(v7);
      v8 = *(_QWORD *)(*((_QWORD *)v7 + 18) + 24LL);
    }
    v6 = *(_DWORD *)(v8 + 32);
  }
  *(_DWORD *)(v5 + 12) = v6;
  return result;
}

