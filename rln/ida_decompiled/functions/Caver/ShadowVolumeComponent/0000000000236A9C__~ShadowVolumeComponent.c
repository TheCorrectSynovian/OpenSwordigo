/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236A9C
 * Mangled: _ZN5Caver21ShadowVolumeComponentD2Ev
 * Demangled: Caver::ShadowVolumeComponent::~ShadowVolumeComponent()
 *
 * Callers: 1
 *   0x00000000001FC030  Caver::ShadowVolumeComponent::~ShadowVolumeComponent()
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FC030  Caver::ShadowVolumeComponent::~ShadowVolumeComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000236BB4  Caver::ShadowVolumeComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x0000000000236AA4 string=0x0000000000236AA8 "h%"
 *   insn=0x0000000000236AA8 string=0x0000000000236AAC ""
 *   insn=0x0000000000236AB0 string=0x0000000000236AB4 "`F@"
 *   insn=0x0000000000236AB4 string=0x0000000000236AB8 "\n"
 *   insn=0x0000000000236AB8 string=0x0000000000236ABC "\tA"
 *   insn=0x0000000000236ABC string=0x0000000000236AC0 "@"
 *   insn=0x0000000000236AC0 string=0x0000000000236AC4 ""
 *   insn=0x0000000000236AC8 string=0x0000000000236ACC "i"
 *   insn=0x0000000000236ACC string=0x0000000000236AD0 "`"
 *   insn=0x0000000000236AD0 string=0x0000000000236AD4 "@"
 *   insn=0x0000000000236AD4 string=0x0000000000236AD8 """
 *   insn=0x0000000000236AD4 string=0x0000000000236ADC "`>@"
 *   insn=0x0000000000236AD8 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000236AE0 string=0x0000000000236AE4 "@"
 *   insn=0x0000000000236AE0 string=0x0000000000236B00 "`:@"
 *   insn=0x0000000000236AE4 string=0x0000000000236AE8 ""
 *   insn=0x0000000000236AE8 string=0x0000000000236AEC ""
 *   insn=0x0000000000236AF0 string=0x0000000000236AF4 ""
 *   insn=0x0000000000236AF4 string=0x0000000000236AF8 ""
 *   insn=0x0000000000236B04 string=0x0000000000236B08 "@"
 *   insn=0x0000000000236B08 string=0x0000000000236B0C ""
 *   insn=0x0000000000236B0C string=0x0000000000236B10 ""
 *   insn=0x0000000000236B14 string=0x0000000000236B18 ""
 *   insn=0x0000000000236B18 string=0x0000000000236B1C ""
 *   insn=0x0000000000236B2C string=0x0000000000236B30 "h"
 *   insn=0x0000000000236B30 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000236B40 string=0x0000000000236B44 "("
 *   insn=0x0000000000236B44 string=0x0000000000236B48 "\t\t@"
 *   insn=0x0000000000236B48 string=0x0000000000236B4C ")"
 *   insn=0x0000000000236B4C string=0x0000000000236B50 "\t\t"
 *   insn=0x0000000000236B54 string=0x0000000000236B58 "\t"
 *   insn=0x0000000000236B58 string=0x0000000000236B5C ")"
 *   insn=0x0000000000236B60 string=0x0000000000236B64 " "
 *   insn=0x0000000000236B68 string=0x0000000000236B6C "Y"
 *   insn=0x0000000000236B70 string=0x0000000000236B74 "T+"
 *   insn=0x0000000000236B88 string=0x0000000000236B8C ")"
 *   insn=0x0000000000236B8C string=0x00000000001FC030 "0'"
 *   insn=0x0000000000236B9C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000236BAC string=0x0000000000236BB0 "E+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShadowVolumeComponent::~ShadowVolumeComponent(Caver::ShadowVolumeComponent *this)
{
  void *v2; // x0
  __int128 v3; // q0
  _DWORD *v4; // x0
  int v5; // w8
  _DWORD *v6; // x0
  int v7; // w8

  v2 = (void *)*((_QWORD *)this + 17);
  *(_QWORD *)&v3 = &off_6BB528;
  *((_QWORD *)&v3 + 1) = &off_6BB568;
  *(_QWORD *)this = off_6BB410;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
    operator delete[](v2);
  v4 = (_DWORD *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    v5 = v4[2] - 1;
    v4[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = (_DWORD *)*((_QWORD *)this + 14);
  if ( v6 )
  {
    v7 = v6[2] - 1;
    v6[2] = v7;
    if ( !v7 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  Caver::Component::~Component(this);
}

