/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000250A78
 * Mangled: _ZN5Caver21UtilityShapeComponentD0Ev
 * Demangled: Caver::UtilityShapeComponent::~UtilityShapeComponent()
 *
 * Callers: 1
 *   0x0000000000250A38  Caver::ProjectileControllerComponent::Create(void)
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000250B34  Caver::UtilityShapeComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x0000000000250A84 string=0x0000000000250A88 "\tE"
 *   insn=0x0000000000250A8C string=0x0000000000250A90 "tB@"
 *   insn=0x0000000000250A90 string=0x0000000000250A94 "\n!"
 *   insn=0x0000000000250A94 string=0x0000000000250A98 "\tA"
 *   insn=0x0000000000250A98 string=0x0000000000250A9C "@"
 *   insn=0x0000000000250A9C string=0x0000000000250AA0 "!"
 *   insn=0x0000000000250AA4 string=0x0000000000250AA8 "i"
 *   insn=0x0000000000250AA8 string=0x0000000000250AAC "`"
 *   insn=0x0000000000250AAC string=0x0000000000250AB0 "4"
 *   insn=0x0000000000250AB4 string=0x0000000000250AB8 ""
 *   insn=0x0000000000250AC4 string=0x0000000000250AC8 "\t@"
 *   insn=0x0000000000250AD4 string=0x0000000000250AD8 ""
 *   insn=0x0000000000250AE4 string=0x0000000000250AE8 "@"
 *   insn=0x0000000000250AF4 string=0x0000000000250AF8 "v"
 *   insn=0x0000000000250AF8 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000250B08 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000250B10 string=0x0000000000250B14 "o"
 *   insn=0x0000000000250B2C string=0x0000000000250B30 "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::UtilityShapeComponent::~UtilityShapeComponent(Caver::UtilityShapeComponent *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  __int64 v4; // x8
  __int64 v5; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 16);
  *(_QWORD *)&v3 = &off_6BB6E8;
  *((_QWORD *)&v3 + 1) = &off_6BB728;
  *(_QWORD *)this = off_6BB5B0;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[1] - 1LL;
    v2[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v5 = v2[2] - 1LL;
      v2[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  Caver::Component::~Component(this);
  operator delete(this);
}

