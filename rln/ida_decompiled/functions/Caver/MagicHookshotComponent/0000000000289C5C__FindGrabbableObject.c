/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000289C5C
 * Mangled: _ZN5Caver22MagicHookshotComponent19FindGrabbableObjectEv
 * Demangled: Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *
 * Callers: 2
 *   0x0000000000201F80  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *   0x0000000000289A6C  Caver::MagicHookshotComponent::Prepare(void)
 *
 * Callees: 23
 *   0x00000000001F4590  AngleDifference(float,float)
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6B10  Caver::TransformControllerComponent::TransformControllerComponent(void)
 *   0x00000000001F6DD0  Caver::Scene::IsObjectVisible(Caver::SceneObject *)
 *   0x00000000001F6DE0  Caver::Vector2::Angle(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F78B0  Caver::Scene::LineSegmentIntersectsGround(Caver::LineSegment const&,float,float,Caver::Vector2 *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8E10  Caver::Vector2::Normalize(void)
 *   0x00000000001FA3D0  Caver::SpellComponent::Cast(void)
 *   0x00000000001FD040  Caver::TransformControllerComponent::ScaleTo(float,float)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000201F80  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *   0x0000000000241E78  Caver::TransformControllerComponent::Interface(void)
 *   0x0000000000274FA8  Caver::MonsterEntityComponent::Interface(void)
 *   0x000000000028A180  Caver::MagicHookshotComponent::CreateBlast(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 105
 *   insn=0x0000000000289C88 string=0x0000000000289C8C "Y"
 *   insn=0x0000000000289C90 string=0x0000000000289C94 "("
 *   insn=0x0000000000289CAC string=0x0000000000289CB0 "@"
 *   insn=0x0000000000289CB8 string=0x0000000000289F08 "("
 *   insn=0x0000000000289CC4 string=0x0000000000289CC8 "\tAF"
 *   insn=0x0000000000289CCC string=0x0000000000289CD0 "\n"
 *   insn=0x0000000000289CE0 string=0x0000000000289CE4 ""
 *   insn=0x0000000000289CFC string=0x0000000000289D08 "A@"
 *   insn=0x0000000000289D08 string=0x0000000000289D0C "1"
 *   insn=0x0000000000289D0C string=0x0000000000289D10 "@\t"
 *   insn=0x0000000000289D0C string=0x00000000001F6DD0 "0'"
 *   insn=0x0000000000289D10 string=0x0000000000289D14 "H@"
 *   insn=0x0000000000289D10 string=0x0000000000289E38 "Z"
 *   insn=0x0000000000289D24 string=0x0000000000289D28 ""
 *   insn=0x0000000000289D28 string=0x0000000000289D2C "Q@"
 *   insn=0x0000000000289D3C string=0x0000000000289D40 "h"
 *   insn=0x0000000000289D44 string=0x0000000000289D48 "a"
 *   insn=0x0000000000289D48 string=0x0000000000289D54 "h"
 *   insn=0x0000000000289D4C string=0x0000000000289D50 ""
 *   insn=0x0000000000289D58 string=0x0000000000289D5C "`"
 *   insn=0x0000000000289D60 string=0x0000000000289D64 "!"
 *   insn=0x0000000000289D74 string=0x0000000000289D78 "("
 *   insn=0x0000000000289D84 string=0x0000000000289D88 "a"
 *   insn=0x0000000000289D90 string=0x0000000000289D94 " "
 *   insn=0x0000000000289DA4 string=0x0000000000289DA8 ""
 *   insn=0x0000000000289DA4 string=0x00000000001F6DE0 "0'"
 *   insn=0x0000000000289DD8 string=0x00000000001F4590 "P'"
 *   insn=0x0000000000289DEC string=0x0000000000289DF0 "H  "
 *   insn=0x0000000000289DF8 string=0x0000000000289DFC "B*"
 *   insn=0x0000000000289DFC string=0x0000000000289E00 "B(+"
 *   insn=0x0000000000289E04 string=0x0000000000289E08 "$!"
 *   insn=0x0000000000289E08 string=0x0000000000289E0C "c($"
 *   insn=0x0000000000289E0C string=0x0000000000289E10 "h"
 *   insn=0x0000000000289E1C string=0x0000000000289E20 "D"
 *   insn=0x0000000000289E24 string=0x0000000000289E28 ""
 *   insn=0x0000000000289E40 string=0x0000000000289E44 "1"
 *   insn=0x0000000000289E50 string=0x0000000000289E54 "!(#"
 *   insn=0x0000000000289E68 string=0x0000000000289E6C " ( "
 *   insn=0x0000000000289E6C string=0x0000000000289E70 "!(""
 *   insn=0x0000000000289E7C string=0x00000000001F78B0 "0'"
 *   insn=0x0000000000289E80 string=0x0000000000289E84 ""
 *   insn=0x0000000000289E84 string=0x0000000000289E88 "\t"
 *   insn=0x0000000000289E8C string=0x0000000000289E90 "(\t@"
 *   insn=0x0000000000289E90 string=0x0000000000289E94 ""
 *   insn=0x0000000000289E94 string=0x0000000000289E98 "(\t"
 *   insn=0x0000000000289EA4 string=0x0000000000289EA8 "H"
 *   insn=0x0000000000289EAC string=0x0000000000289EB0 "(\t@"
 *   insn=0x0000000000289EB0 string=0x0000000000289EB4 ""
 *   insn=0x0000000000289EB4 string=0x0000000000289EB8 "(\t"
 *   insn=0x0000000000289EC0 string=0x0000000000289EC4 ""
 *   insn=0x0000000000289EC4 string=0x0000000000289EC8 ""
 *   insn=0x0000000000289EDC string=0x00000000001F8E10 "0'"
 *   insn=0x0000000000289EF4 string=0x0000000000289EF8 ")"
 *   insn=0x0000000000289F48 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000289F6C string=0x0000000000289F70 "@"
 *   insn=0x0000000000289F70 string=0x0000000000289F74 ""
 *   insn=0x0000000000289F74 string=0x0000000000289F78 ""
 *   insn=0x0000000000289F7C string=0x0000000000289F80 ""
 *   insn=0x0000000000289F80 string=0x0000000000289F84 ""
 *   insn=0x0000000000289F8C string=0x0000000000289F90 "M"
 *   insn=0x0000000000289FA8 string=0x0000000000289FAC "U"
 *   insn=0x0000000000289FC8 string=0x0000000000289FD8 "`"
 *   insn=0x0000000000289FCC string=0x0000000000289FD0 ""
 *   insn=0x0000000000289FD8 string=0x0000000000289FDC "t"
 *   insn=0x0000000000289FE0 string=0x0000000000289FE4 "@"
 *   insn=0x0000000000289FE0 string=0x000000000028A000 "4"
 *   insn=0x0000000000289FE4 string=0x0000000000289FE8 ""
 *   insn=0x0000000000289FE8 string=0x0000000000289FEC ""
 *   insn=0x0000000000289FF0 string=0x0000000000289FF4 ""
 *   insn=0x0000000000289FF4 string=0x0000000000289FF8 ""
 *   insn=0x000000000028A004 string=0x000000000028A008 ""
 *   insn=0x000000000028A018 string=0x000000000028A01C ""
 *   insn=0x000000000028A028 string=0x000000000028A02C "`v@"
 *   insn=0x000000000028A028 string=0x00000000001FA3D0 "0'"
 *   insn=0x000000000028A030 string=0x000000000028A034 "`b"
 *   insn=0x000000000028A03C string=0x000000000028A040 "`v@"
 *   insn=0x000000000028A03C string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000028A040 string=0x000000000028A044 "@"
 *   insn=0x000000000028A048 string=0x00000000001F4FA0 "P'"
 *   insn=0x000000000028A04C string=0x000000000028A050 "`BH"
 *   insn=0x000000000028A050 string=0x000000000028A054 "a"
 *   insn=0x000000000028A054 string=0x000000000028A058 ""yI"
 *   insn=0x000000000028A058 string=0x000000000028A05C "H"
 *   insn=0x000000000028A05C string=0x000000000028A060 "t"
 *   insn=0x000000000028A068 string=0x000000000028A06C "!""
 *   insn=0x000000000028A074 string=0x000000000028A078 "hn"
 *   insn=0x000000000028A0B8 string=0x000000000028A0BC "4"
 *   insn=0x000000000028A0C0 string=0x000000000028A0C4 ""
 *   insn=0x000000000028A0D0 string=0x000000000028A0D4 ""
 *   insn=0x000000000028A100 string=0x000000000028A104 "u"
 *   insn=0x000000000028A104 string=0x000000000028A108 "vb"
 *   insn=0x000000000028A10C string=0x000000000028A110 "!0E"
 *   insn=0x000000000028A110 string=0x0000000000241E78 " %"
 *   insn=0x000000000028A114 string=0x000000000028A118 "2"
 *   insn=0x000000000028A124 string=0x000000000028A128 "."
 *   insn=0x000000000028A128 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000028A12C string=0x000000000028A130 "x"
 *   insn=0x000000000028A130 string=0x00000000001F6B10 "0'"
 *   insn=0x000000000028A13C string=0x00000000001F45A0 "P'"
 *   insn=0x000000000028A140 string=0x0000000000583944 "\n"
 *   insn=0x000000000028A148 string=0x000000000028A14C "!"
 *   insn=0x000000000028A154 string=0x000000000028A158 "v"
 *   insn=0x000000000028A154 string=0x00000000001FD040 "0'"
 *   insn=0x000000000028A170 string=0x000000000028A174 "O"
 *   insn=0x000000000028A174 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::MagicHookshotComponent::FindGrabbableObject(
        Caver::MagicHookshotComponent *this@<X0>,
        _QWORD *a2@<X8>)
{
  __int64 v4; // x0
  _QWORD *v5; // x26
  _QWORD *v6; // x27
  float v7; // s15
  char v8; // w0
  __int64 v9; // x8
  _QWORD *v10; // x24
  _QWORD *v11; // x28
  __int64 v12; // x19
  char v13; // w23
  float v14; // s0
  float v15; // s8
  float v16; // s0
  float v17; // s0
  float v18; // s2
  float v19; // s8
  __int64 v20; // x8
  float v21; // s2
  float v22; // s3
  _DWORD *v23; // x9
  int v24; // w8
  __int64 v25; // x8
  _DWORD *v26; // [xsp+88h] [xbp-D8h]
  _DWORD *v27; // [xsp+90h] [xbp-D0h]
  char v28; // [xsp+9Ch] [xbp-C4h]
  __int64 v29; // [xsp+A0h] [xbp-C0h] BYREF
  __int64 v30; // [xsp+A8h] [xbp-B8h] BYREF
  float v31; // [xsp+B0h] [xbp-B0h]
  float v32; // [xsp+B4h] [xbp-ACh]
  char v33[8]; // [xsp+B8h] [xbp-A8h] BYREF
  _QWORD v34[2]; // [xsp+C0h] [xbp-A0h] BYREF

  v34[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *a2 = 0;
  v4 = *(_QWORD *)(*((_QWORD *)this + 5) + 32LL);
  v5 = *(_QWORD **)(v4 + 272);
  v6 = (_QWORD *)(v4 + 272);
  if ( (_QWORD *)(v4 + 272) == v5 )
    return;
  v7 = 3.4028e38;
  v26 = 0;
  v28 = 0;
  do
  {
    Caver::Scene::IsObjectVisible();
    if ( (v8 & 1) == 0 )
      goto LABEL_16;
    v9 = v5[2];
    v10 = *(_QWORD **)(v9 + 192);
    v11 = *(_QWORD **)(v9 + 200);
    if ( v10 == v11 )
      goto LABEL_16;
    while ( 1 )
    {
      if ( ((*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *(__fastcall *)(Caver::CollisionShapeComponent *))(Caver::CollisionShapeComponent *__hidden)))(*(_QWORD *)*v10 + 160LL))(
              *v10,
              Caver::CollisionShapeComponent::Interface)
          & 1) != 0 )
      {
        v12 = *v10;
        if ( *(_DWORD *)(*v10 + 384LL) == 7 )
        {
          v13 = 1;
        }
        else
        {
          if ( !*(_BYTE *)(v12 + 379)
            || v28 & 1
             | (Caver::SceneObject::ComponentWithInterface(
                  *(Caver::SceneObject **)(v12 + 40),
                  (__int64)Caver::MonsterEntityComponent::Interface) == 0) )
          {
            goto LABEL_15;
          }
          v13 = 0;
        }
        v34[0] = vsub_f32(
                   vadd_f32(
                     *(float32x2_t *)(v12 + 360),
                     vmul_f32(*(float32x2_t *)(v12 + 368), (float32x2_t)0x3F0000003F000000LL)),
                   *(float32x2_t *)(*((_QWORD *)this + 5) + 112LL)).n64_u64[0];
        Caver::Vector2::Angle((Caver::Vector2 *)v34);
        v15 = v14;
        v30 = *(_QWORD *)((char *)this + 132);
        v31 = *((float *)this + 35);
        Caver::Vector2::Vector2((Caver::Vector2 *)v33, (const Caver::Vector3 *)&v30);
        Caver::Vector2::Angle((Caver::Vector2 *)v33);
        AngleDifference(v15, v16);
        v18 = fabsf(v17) / -2.35619449 + 1.0;
        if ( v18 >= 0.0 )
        {
          v19 = (float)((float)(*(float *)v34 * *(float *)v34) + (float)(*((float *)v34 + 1) * *((float *)v34 + 1)))
              / (float)((float)(v18 * 0.8) + 0.2);
          if ( v19 <= 302500.0 && (v19 < v7 || !v26) )
            break;
        }
      }
LABEL_15:
      if ( v11 == ++v10 )
        goto LABEL_16;
    }
    v20 = *((_QWORD *)this + 5);
    v21 = *(float *)(v20 + 112);
    v22 = *(float *)(v20 + 116);
    *(float *)&v30 = *(float *)v34 + v21;
    *((float *)&v30 + 1) = *((float *)v34 + 1) + v22;
    v31 = v21;
    v32 = v22;
    if ( (Caver::Scene::LineSegmentIntersectsGround(
            *(Caver::Scene **)(v20 + 32),
            (const Caver::LineSegment *)&v30,
            *(float *)(v20 + 120) + *(float *)(v20 + 184),
            *(float *)(v20 + 120) + *(float *)(v20 + 188),
            0)
        & 1) == 0 )
    {
      v23 = *(_DWORD **)(*v10 + 40LL);
      if ( v23 )
        ++v23[2];
      v27 = v23;
      *a2 = v23;
      if ( v26 )
      {
        v24 = v26[2] - 1;
        v26[2] = v24;
        if ( !v24 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 8LL))(v26);
      }
      v29 = v34[0];
      Caver::Vector2::Normalize((Caver::Vector2 *)&v29);
      v25 = v29;
      *((_DWORD *)this + 35) = 0;
      v7 = v19;
      *(_QWORD *)((char *)this + 132) = v25;
      v28 |= v13;
      v26 = v27;
    }
LABEL_16:
    v5 = (_QWORD *)*v5;
  }
  while ( v6 != v5 );
}

