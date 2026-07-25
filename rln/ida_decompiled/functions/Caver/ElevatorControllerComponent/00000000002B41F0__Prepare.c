/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B41F0
 * Mangled: _ZN5Caver27ElevatorControllerComponent7PrepareEv
 * Demangled: Caver::ElevatorControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6FC0  Caver::Shape::Bounds(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F9220  Caver::ElevatorControllerComponent::RegisterLibrary(void)
 *   0x00000000001F9E30  Caver::Rectangle::ExpandToIncludePoint(Caver::Vector2 const&)
 *
 * Referenced strings: 31
 *   insn=0x00000000002B41FC string=0x00000000002B4200 "T"
 *   insn=0x00000000002B4210 string=0x00000000002B4214 "hB@"
 *   insn=0x00000000002B4210 string=0x00000000001F9220 "0'"
 *   insn=0x00000000002B4218 string=0x00000000002B421C "`"
 *   insn=0x00000000002B4220 string=0x00000000002B4224 "/"
 *   insn=0x00000000002B4224 string=0x00000000002B4228 "hB@"
 *   insn=0x00000000002B4224 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002B4228 string=0x00000000002B422C "H"
 *   insn=0x00000000002B4234 string=0x00000000002B4238 "b"
 *   insn=0x00000000002B4238 string=0x00000000001F6FC0 "P'"
 *   insn=0x00000000002B4244 string=0x00000000002B4248 ""@!"
 *   insn=0x00000000002B4248 string=0x00000000002B424C " ( "
 *   insn=0x00000000002B4254 string=0x00000000002B4258 "`"
 *   insn=0x00000000002B425C string=0x00000000002B4260 " "
 *   insn=0x00000000002B4260 string=0x00000000002B4264 "D"
 *   insn=0x00000000002B4268 string=0x00000000002B426C "a"
 *   insn=0x00000000002B4274 string=0x00000000002B4278 "#(""
 *   insn=0x00000000002B4278 string=0x00000000002B427C "` $"
 *   insn=0x00000000002B427C string=0x00000000002B4280 ""
 *   insn=0x00000000002B4284 string=0x00000000002B4288 "i"
 *   insn=0x00000000002B428C string=0x00000000002B4290 "d"
 *   insn=0x00000000002B4290 string=0x00000000002B4294 "c"
 *   insn=0x00000000002B429C string=0x00000000002B42AC ""@!"
 *   insn=0x00000000002B42A0 string=0x00000000002B42A4 ""
 *   insn=0x00000000002B42B4 string=0x00000000002B42D0 "b@!"
 *   insn=0x00000000002B42B8 string=0x00000000002B42BC ")"
 *   insn=0x00000000002B42C0 string=0x00000000002B42C4 "a"
 *   insn=0x00000000002B42CC string=0x00000000002B42D4 "i"
 *   insn=0x00000000002B42E4 string=0x00000000002B42E8 "h"
 *   insn=0x00000000002B42F0 string=0x00000000001F9E30 "0'"
 *   insn=0x00000000002B4314 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ElevatorControllerComponent::Prepare(Caver::ElevatorControllerComponent *this)
{
  __int64 v2; // x8
  __int64 result; // x0
  float v4; // s1
  float v5; // s0
  float v6; // s0
  float v7; // s4
  float v8; // s1
  float v9; // s3
  float v10; // w8
  float v11; // w9
  float v12; // s2
  _DWORD v13[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 v14; // [xsp+8h] [xbp-28h] BYREF
  float v15; // [xsp+10h] [xbp-20h]
  float v16; // [xsp+14h] [xbp-1Ch]
  __int64 v17; // [xsp+18h] [xbp-18h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::ElevatorControllerComponent::RegisterLibrary(this);
  v2 = *((_QWORD *)this + 16);
  if ( v2
    || (result = Caver::ComponentOutletBase::Connect((Caver::ElevatorControllerComponent *)((char *)this + 112), this),
        (v2 = *((_QWORD *)this + 16)) != 0) )
  {
    Caver::Shape::Bounds(&v14, (Caver::Shape *)(v2 + 112));
    v4 = *((float *)&v14 + 1);
    v5 = v16;
    *((_DWORD *)this + 43) = 0;
    v6 = v4 + v5;
    v7 = v6;
    *((float *)this + 44) = v6;
    if ( v6 < (float)-v4 )
    {
      v6 = v4;
      v7 = -v4;
      *((_DWORD *)this + 43) = 0;
      *((float *)this + 44) = v4;
    }
    v8 = *(float *)&v14;
    v9 = *(float *)&v14 + v15;
    if ( (float)(*(float *)&v14 + v15) <= v7 )
    {
      v11 = 0.0;
      v10 = v6;
      v9 = 0.0;
    }
    else
    {
      v10 = 0.0;
      v11 = *(float *)&v14 + v15;
      v6 = 0.0;
      v7 = *(float *)&v14 + v15;
      *((float *)this + 43) = v9;
      *((_DWORD *)this + 44) = 0;
    }
    v12 = -v8;
    if ( v7 >= (float)-v8 )
    {
      v12 = -v9;
    }
    else
    {
      v10 = 0.0;
      v11 = v8;
      v6 = 0.0;
      *((float *)this + 43) = v8;
      *((_DWORD *)this + 44) = 0;
    }
    *((float *)this + 34) = v11;
    *((_QWORD *)this + 18) = 0;
    *((float *)this + 35) = v10;
    *(float *)v13 = v12;
    *(float *)&v13[1] = -v6;
    return Caver::Rectangle::ExpandToIncludePoint(
             (Caver::ElevatorControllerComponent *)((char *)this + 136),
             (const Caver::Vector2 *)v13);
  }
  return result;
}

