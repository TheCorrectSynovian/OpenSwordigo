/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3150
 * Mangled: _ZN5Caver20FireEmitterComponentD2Ev
 * Demangled: Caver::FireEmitterComponent::~FireEmitterComponent()
 *
 * Callers: 1
 *   0x0000000000201500  Caver::FireEmitterComponent::~FireEmitterComponent()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x0000000000201500  Caver::FireEmitterComponent::~FireEmitterComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002A3288  Caver::FireEmitterComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 41
 *   insn=0x00000000002A3158 string=0x00000000002A315C """
 *   insn=0x00000000002A315C string=0x00000000002A3160 ""
 *   insn=0x00000000002A3160 string=0x00000000002A3164 ")""
 *   insn=0x00000000002A3168 string=0x00000000002A316C ")iC"
 *   insn=0x00000000002A316C string=0x00000000002A3170 "`N@"
 *   insn=0x00000000002A3170 string=0x00000000002A3174 ""
 *   insn=0x00000000002A3174 string=0x00000000002A3178 "\nA"
 *   insn=0x00000000002A3178 string=0x00000000002A317C ""
 *   insn=0x00000000002A317C string=0x00000000002A3180 "`"
 *   insn=0x00000000002A3180 string=0x00000000002A3184 ")A"
 *   insn=0x00000000002A3188 string=0x00000000002A318C "j"
 *   insn=0x00000000002A318C string=0x00000000002A3190 "`"
 *   insn=0x00000000002A3190 string=0x00000000002A3194 "iF"
 *   insn=0x00000000002A3198 string=0x00000000002A319C "@"
 *   insn=0x00000000002A3198 string=0x00000000002A31B8 "(""
 *   insn=0x00000000002A319C string=0x00000000002A31A0 ""
 *   insn=0x00000000002A31A0 string=0x00000000002A31A4 ""
 *   insn=0x00000000002A31A8 string=0x00000000002A31AC ""
 *   insn=0x00000000002A31AC string=0x00000000002A31B0 ""
 *   insn=0x00000000002A31B8 string=0x00000000002A31BC "`B@"
 *   insn=0x00000000002A31BC string=0x00000000002A31C0 "mB"
 *   insn=0x00000000002A31C0 string=0x00000000002A31C4 "A"
 *   insn=0x00000000002A31C4 string=0x00000000002A31C8 "h:"
 *   insn=0x00000000002A31CC string=0x00000000002A31D0 "@"
 *   insn=0x00000000002A31D0 string=0x00000000002A31D4 ""
 *   insn=0x00000000002A31D4 string=0x00000000002A31D8 ""
 *   insn=0x00000000002A31DC string=0x00000000002A31E0 ""
 *   insn=0x00000000002A31E0 string=0x00000000002A31E4 ""
 *   insn=0x00000000002A31F8 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002A3208 string=0x00000000002A320C "`B@"
 *   insn=0x00000000002A320C string=0x00000000002A3210 "mB"
 *   insn=0x00000000002A3210 string=0x00000000002A3214 "A"
 *   insn=0x00000000002A3214 string=0x00000000002A3218 "h:"
 *   insn=0x00000000002A321C string=0x00000000002A3220 "@"
 *   insn=0x00000000002A3220 string=0x00000000002A3224 ""
 *   insn=0x00000000002A3224 string=0x00000000002A3228 ""
 *   insn=0x00000000002A322C string=0x00000000002A3230 ""
 *   insn=0x00000000002A3230 string=0x00000000002A3234 ""
 *   insn=0x00000000002A3248 string=0x00000000002A324C "@"
 *   insn=0x00000000002A3270 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002A3278 string=0x00000000002A327C "P"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FireEmitterComponent::~FireEmitterComponent(Caver::FireEmitterComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 19);
  *(_QWORD *)&v3 = &off_6C2DE8;
  *((_QWORD *)&v3 + 1) = &off_6C2E28;
  *(_QWORD *)this = off_6C2CD0;
  *((_OWORD *)this + 1) = v3;
  *((_QWORD *)this + 17) = &off_6C2E68;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 14) = off_6C0268;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  Caver::Component::~Component(this);
}

