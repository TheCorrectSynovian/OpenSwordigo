/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000443F08
 * Mangled: _ZN5Caver12MeshMaterial23LoadFromProtobufMessageERKNS_5Proto12MeshMaterialE
 * Demangled: Caver::MeshMaterial::LoadFromProtobufMessage(Caver::Proto::MeshMaterial const&)
 *
 * Callers: 1
 *   0x00000000002018C0  Caver::MeshMaterial::LoadFromProtobufMessage(Caver::Proto::MeshMaterial const&)
 *
 * Callees: 13
 *   0x00000000001F3F20  Caver::Proto::FloatColor::FloatColor(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8C60  Caver::TextureLibrary::TextureFromProtobufMessage(Caver::Proto::Texture const&,bool)
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FF060  Caver::Texture::SaveToProtobufMessage(Caver::Proto::Texture *)
 *   0x00000000002009C0  Caver::Proto::Texture::Texture(void)
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000444214  Caver::Mesh::LoadFromProtobufMessage(Caver::Proto::Mesh const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 86
 *   insn=0x0000000000443F18 string=0x0000000000443F1C "U"
 *   insn=0x0000000000443F34 string=0x0000000000443F38 "h\t7"
 *   insn=0x0000000000443F34 string=0x0000000000444030 "\t"
 *   insn=0x0000000000443F38 string=0x0000000000444064 "\t"
 *   insn=0x0000000000443F3C string=0x0000000000443F40 "\t"
 *   insn=0x0000000000443F44 string=0x0000000000443F48 ")"
 *   insn=0x0000000000443F4C string=0x0000000000443F50 ")"
 *   insn=0x0000000000443F50 string=0x0000000000443F54 "("
 *   insn=0x0000000000443F5C string=0x0000000000443F60 "L"
 *   insn=0x0000000000443F60 string=0x00000000001FA090 "0'"
 *   insn=0x0000000000443F64 string=0x0000000000443F68 "`\n"
 *   insn=0x0000000000443F70 string=0x0000000000443F74 "i2"
 *   insn=0x0000000000443F7C string=0x0000000000443F80 "\t"
 *   insn=0x0000000000443F7C string=0x00000000001FA350 "0'"
 *   insn=0x0000000000443F84 string=0x0000000000443F88 ")"
 *   insn=0x0000000000443F90 string=0x0000000000443F94 ")"
 *   insn=0x0000000000443F94 string=0x0000000000443F98 "("
 *   insn=0x0000000000443FA0 string=0x0000000000443FA4 "/"
 *   insn=0x0000000000443FA4 string=0x00000000001F8C60 "0'"
 *   insn=0x0000000000443FAC string=0x0000000000443FB0 "@"
 *   insn=0x0000000000443FAC string=0x0000000000443FBC "h"
 *   insn=0x0000000000443FB0 string=0x0000000000443FB4 ""
 *   insn=0x0000000000443FB4 string=0x0000000000443FB8 ""
 *   insn=0x0000000000443FBC string=0x0000000000443FC0 "`"
 *   insn=0x0000000000443FC0 string=0x0000000000443FC4 "H"
 *   insn=0x0000000000443FC4 string=0x0000000000443FC8 "\t\t@"
 *   insn=0x0000000000443FC8 string=0x0000000000443FCC ")"
 *   insn=0x0000000000443FCC string=0x0000000000443FD0 "\t\t"
 *   insn=0x0000000000443FD4 string=0x0000000000443FD8 "\t"
 *   insn=0x0000000000443FD8 string=0x0000000000443FDC ")"
 *   insn=0x0000000000443FE0 string=0x0000000000443FE4 " "
 *   insn=0x0000000000443FEC string=0x0000000000443FF0 "@"
 *   insn=0x0000000000443FF0 string=0x0000000000443FF4 ""
 *   insn=0x0000000000443FF4 string=0x0000000000443FF8 ""
 *   insn=0x0000000000443FFC string=0x0000000000444000 ""
 *   insn=0x0000000000444000 string=0x0000000000444004 ""
 *   insn=0x0000000000444014 string=0x0000000000444018 "!"
 *   insn=0x0000000000444034 string=0x0000000000444038 ")"
 *   insn=0x000000000044403C string=0x0000000000444040 ")"
 *   insn=0x0000000000444040 string=0x0000000000444044 "("
 *   insn=0x0000000000444054 string=0x0000000000444058 "`"
 *   insn=0x0000000000444068 string=0x000000000044406C ")"
 *   insn=0x0000000000444070 string=0x0000000000444074 ")"
 *   insn=0x0000000000444074 string=0x0000000000444078 "("
 *   insn=0x0000000000444088 string=0x000000000044408C "`"
 *   insn=0x0000000000444090 string=0x0000000000444094 "h"
 *   insn=0x000000000044409C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004440A4 string=0x00000000004440A8 "("
 *   insn=0x00000000004440A8 string=0x00000000004440AC "\t\t@"
 *   insn=0x00000000004440AC string=0x00000000004440B0 ")"
 *   insn=0x00000000004440B0 string=0x00000000004440B4 "\t\t"
 *   insn=0x00000000004440B8 string=0x00000000004440BC "\t"
 *   insn=0x00000000004440BC string=0x00000000004440C0 ")"
 *   insn=0x00000000004440C4 string=0x00000000004440C8 " "
 *   insn=0x00000000004440E8 string=0x00000000004440EC "h:@"
 *   insn=0x00000000004440EC string=0x00000000004440F0 "u\n@"
 *   insn=0x00000000004440F4 string=0x00000000004440F8 ""
 *   insn=0x00000000004440F8 string=0x00000000004440FC "h:"
 *   insn=0x0000000000444104 string=0x0000000000444108 "6"
 *   insn=0x0000000000444108 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000444110 string=0x0000000000444114 "u\n"
 *   insn=0x0000000000444110 string=0x00000000001F3F20 "P'"
 *   insn=0x0000000000444120 string=0x0000000000444124 "h:@"
 *   insn=0x0000000000444124 string=0x0000000000444128 "u"
 *   insn=0x0000000000444128 string=0x000000000044412C ""
 *   insn=0x000000000044412C string=0x0000000000444130 "h:"
 *   insn=0x0000000000444138 string=0x000000000044413C ")"
 *   insn=0x0000000000444140 string=0x0000000000444144 "w"
 *   insn=0x0000000000444144 string=0x0000000000444148 "u"
 *   insn=0x0000000000444154 string=0x0000000000444158 "h:@"
 *   insn=0x0000000000444158 string=0x000000000044415C "u"
 *   insn=0x000000000044415C string=0x0000000000444160 ""
 *   insn=0x0000000000444160 string=0x0000000000444164 "h:"
 *   insn=0x0000000000444174 string=0x0000000000444178 "j"
 *   insn=0x0000000000444178 string=0x000000000044417C "u"
 *   insn=0x0000000000444188 string=0x000000000044418C "h:@"
 *   insn=0x0000000000444190 string=0x0000000000444194 "\n"
 *   insn=0x0000000000444194 string=0x0000000000444198 "j:"
 *   insn=0x0000000000444198 string=0x000000000044419C "i*"
 *   insn=0x00000000004441A4 string=0x00000000004441A8 "u"
 *   insn=0x00000000004441A8 string=0x00000000004441AC ""
 *   insn=0x00000000004441AC string=0x00000000004441B0 "h:"
 *   insn=0x00000000004441B8 string=0x00000000004441BC "\t"
 *   insn=0x00000000004441C4 string=0x00000000004441C8 "u"
 *   insn=0x0000000000444204 string=0x0000000000444208 "*"
 *   insn=0x0000000000444208 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::MeshMaterial::LoadFromProtobufMessage(__int64 *this, const Caver::Proto::MeshMaterial *a2)
{
  __int64 *v3; // x19
  int v4; // w8
  const Caver::Proto::MeshMaterial *v5; // x8
  Caver::TextureLibrary *v6; // x0
  const Caver::Proto::MeshMaterial *v7; // x8
  _DWORD *v8; // x8
  int v9; // w9
  int v10; // w8
  const Caver::Proto::MeshMaterial *v11; // x8
  const Caver::Proto::MeshMaterial *v12; // x8
  __int128 v13; // [xsp+38h] [xbp-38h] BYREF
  __int64 v14; // [xsp+48h] [xbp-28h]

  v3 = this;
  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((_DWORD *)a2 + 14);
  if ( (v4 & 1) != 0 )
  {
    if ( *((_QWORD *)a2 + 2) )
      v11 = a2;
    else
      v11 = (const Caver::Proto::MeshMaterial *)Caver::Proto::MeshMaterial::default_instance_;
    this = Caver::FloatColorFromProtobufMessage((__int64 *)&v13, *((Caver **)v11 + 2), a2);
    *(_OWORD *)v3 = v13;
    v4 = *((_DWORD *)a2 + 14);
    if ( (v4 & 2) == 0 )
    {
LABEL_3:
      if ( (v4 & 4) == 0 )
        goto LABEL_8;
      goto LABEL_4;
    }
  }
  else if ( (v4 & 2) == 0 )
  {
    goto LABEL_3;
  }
  if ( *((_QWORD *)a2 + 3) )
    v12 = a2;
  else
    v12 = (const Caver::Proto::MeshMaterial *)Caver::Proto::MeshMaterial::default_instance_;
  this = Caver::FloatColorFromProtobufMessage((__int64 *)&v13, *((Caver **)v12 + 3), a2);
  *((_OWORD *)v3 + 1) = v13;
  v4 = *((_DWORD *)a2 + 14);
  if ( (v4 & 4) != 0 )
  {
LABEL_4:
    if ( *((_QWORD *)a2 + 4) )
      v5 = a2;
    else
      v5 = (const Caver::Proto::MeshMaterial *)Caver::Proto::MeshMaterial::default_instance_;
    this = Caver::FloatColorFromProtobufMessage((__int64 *)&v13, *((Caver **)v5 + 4), a2);
    *((_OWORD *)v3 + 2) = v13;
    v4 = *((_DWORD *)a2 + 14);
  }
LABEL_8:
  *((_DWORD *)v3 + 12) = *((_DWORD *)a2 + 10);
  if ( (v4 & 0x10) != 0 )
  {
    v6 = (Caver::TextureLibrary *)Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)this);
    if ( *((_QWORD *)a2 + 6) )
      v7 = a2;
    else
      v7 = (const Caver::Proto::MeshMaterial *)Caver::Proto::MeshMaterial::default_instance_;
    Caver::TextureLibrary::TextureFromProtobufMessage(v6, *((const Caver::Proto::Texture **)v7 + 6));
    this = (__int64 *)v13;
    if ( (_QWORD)v13 )
      ++*(_DWORD *)(v13 + 8);
    v8 = (_DWORD *)v3[7];
    v3[7] = (__int64)this;
    if ( v8 )
    {
      v9 = v8[2] - 1;
      v8[2] = v9;
      if ( !v9 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
        this = (__int64 *)v13;
      }
    }
    if ( this )
    {
      v10 = *((_DWORD *)this + 2) - 1;
      *((_DWORD *)this + 2) = v10;
      if ( !v10 )
        return (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*this + 8))(this);
    }
  }
  return this;
}

