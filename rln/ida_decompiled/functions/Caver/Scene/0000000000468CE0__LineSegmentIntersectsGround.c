/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000468CE0
 * Mangled: _ZN5Caver5Scene27LineSegmentIntersectsGroundERKNS_11LineSegmentEffPNS_7Vector2E
 * Demangled: Caver::Scene::LineSegmentIntersectsGround(Caver::LineSegment const&,float,float,Caver::Vector2 *)
 *
 * Callers: 1
 *   0x00000000001F78B0  Caver::Scene::LineSegmentIntersectsGround(Caver::LineSegment const&,float,float,Caver::Vector2 *)
 *
 * Callees: 6
 *   0x00000000001F3FD0  Caver::CollisionShapeComponent::collisionShape(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F84C0  Caver::SceneGrid::GetObjectsInBounds(Caver::Rectangle const&,void ***)
 *   0x00000000001F8C50  Caver::SceneObject::isHidden(void)
 *   0x00000000001FAE20  Caver::CollisionShape::IntersectsWithLineSegment(Caver::LineSegment const&,Caver::Vector2 *,Caver::Vector2 *,int *)
 *   0x00000000001FD9D0  Caver::LineSegment::Bounds(void)
 *
 * Referenced strings: 34
 *   insn=0x0000000000468D00 string=0x0000000000468D04 "X"
 *   insn=0x0000000000468D04 string=0x0000000000468D08 ""
 *   insn=0x0000000000468D20 string=0x0000000000468D24 "("
 *   insn=0x0000000000468D24 string=0x0000000000468D28 "\t"
 *   insn=0x0000000000468D28 string=0x0000000000468D2C ")S"
 *   insn=0x0000000000468D2C string=0x00000000001FD9D0 "0'"
 *   insn=0x0000000000468D30 string=0x0000000000583944 "\n"
 *   insn=0x0000000000468D38 string=0x0000000000468D3C "   "
 *   insn=0x0000000000468D40 string=0x0000000000468D44 "H"
 *   insn=0x0000000000468D50 string=0x0000000000468D54 "   "
 *   insn=0x0000000000468D58 string=0x0000000000468D5C "H"
 *   insn=0x0000000000468D74 string=0x00000000001F84C0 "0'"
 *   insn=0x0000000000468D78 string=0x0000000000468D7C "U"
 *   insn=0x0000000000468D80 string=0x0000000000468D84 "\n"
 *   insn=0x0000000000468D9C string=0x0000000000468E34 "9"
 *   insn=0x0000000000468DA8 string=0x0000000000468DAC "W"
 *   insn=0x0000000000468DB4 string=0x00000000001F8C50 "0'"
 *   insn=0x0000000000468DC4 string=0x0000000000468DC8 "  ("
 *   insn=0x0000000000468DC8 string=0x0000000000468DCC "L"
 *   insn=0x0000000000468DE0 string=0x0000000000468DE4 "{,"
 *   insn=0x0000000000468DE4 string=0x00000000001F3FD0 "P'"
 *   insn=0x0000000000468DF4 string=0x0000000000468DF8 "\nH"
 *   insn=0x0000000000468DF8 string=0x00000000001FAE20 "0'"
 *   insn=0x0000000000468E04 string=0x0000000000468E08 "B8 "
 *   insn=0x0000000000468E08 string=0x0000000000468E0C "c8!"
 *   insn=0x0000000000468E0C string=0x0000000000468E10 "B""
 *   insn=0x0000000000468E10 string=0x0000000000468E14 "c#"
 *   insn=0x0000000000468E14 string=0x0000000000468E18 "B(#"
 *   insn=0x0000000000468E18 string=0x0000000000468E1C "@ *"
 *   insn=0x0000000000468E28 string=0x0000000000468E2C "J"
 *   insn=0x0000000000468E2C string=0x0000000000468E30 "`"
 *   insn=0x0000000000468E40 string=0x0000000000468E48 ""
 *   insn=0x0000000000468E54 string=0x0000000000468E58 "@"
 *   insn=0x0000000000468E88 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Scene::LineSegmentIntersectsGround(
        Caver::Scene *this,
        const Caver::LineSegment *a2,
        float a3,
        float a4,
        Caver::Vector2 *a5)
{
  unsigned int ObjectsInBounds; // w21
  float v11; // s10
  __int64 v12; // x25
  char v13; // w26
  void *v14; // x22
  float *v15; // x23
  float v16; // s0
  Caver::CollisionShape *v17; // x0
  float v18; // s1
  float v20; // [xsp+8h] [xbp-88h] BYREF
  float v21; // [xsp+Ch] [xbp-84h]
  __int64 v22; // [xsp+10h] [xbp-80h] BYREF
  float v23; // [xsp+18h] [xbp-78h]
  float v24; // [xsp+1Ch] [xbp-74h]
  void **v25[2]; // [xsp+20h] [xbp-70h] BYREF

  v25[1] = *(void ***)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::LineSegment::Bounds(&v22, a2);
  if ( v23 < 0.01 )
    v23 = 0.01;
  if ( v24 < 0.01 )
    v24 = 0.01;
  ObjectsInBounds = Caver::SceneGrid::GetObjectsInBounds(
                      (Caver::Scene *)((char *)this + 928),
                      (const Caver::Rectangle *)&v22,
                      v25);
  if ( ObjectsInBounds )
  {
    v11 = 3.4028e38;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v14 = v25[0][v12];
      if ( *((_BYTE *)v14 + 378) )
      {
        if ( *((_BYTE *)v14 + 376) )
        {
          v15 = (float *)*((_QWORD *)v14 + 5);
          if ( v15 )
          {
            if ( (Caver::SceneObject::isHidden(*((Caver::SceneObject **)v14 + 5)) & 1) == 0 )
            {
              v16 = v15[30];
              if ( (float)(v16 + v15[46]) <= a4 && (float)(v16 + v15[47]) >= a3 )
              {
                v17 = (Caver::CollisionShape *)Caver::CollisionShapeComponent::collisionShape((Caver::CollisionShapeComponent *)v14);
                if ( (Caver::CollisionShape::IntersectsWithLineSegment(v17, a2, (Caver::Vector2 *)&v20, 0, 0) & 1) != 0 )
                {
                  v18 = v21;
                  if ( (float)((float)((float)(*(float *)a2 - v20) * (float)(*(float *)a2 - v20))
                             + (float)((float)(*((float *)a2 + 1) - v21) * (float)(*((float *)a2 + 1) - v21))) < v11 )
                  {
                    if ( !a5 )
                    {
                      v13 = 1;
                      return v13 & 1;
                    }
                    v13 = 1;
                    v11 = (float)((float)(*(float *)a2 - v20) * (float)(*(float *)a2 - v20))
                        + (float)((float)(*((float *)a2 + 1) - v21) * (float)(*((float *)a2 + 1) - v21));
                    *(float *)a5 = v20;
                    *((float *)a5 + 1) = v18;
                  }
                }
              }
            }
          }
        }
      }
      if ( ObjectsInBounds <= (unsigned int)++v12 )
        return v13 & 1;
    }
  }
  v13 = 0;
  return v13 & 1;
}

