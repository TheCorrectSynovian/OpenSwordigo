/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000230128
 * Mangled: _ZN5Caver15PortalComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::PortalComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FE610  Caver::PortalComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 56
 *   insn=0x0000000000230134 string=0x0000000000230138 "T"
 *   insn=0x0000000000230140 string=0x0000000000230144 "?"
 *   insn=0x000000000023014C string=0x0000000000230150 "?"
 *   insn=0x000000000023014C string=0x0000000000230208 "H"
 *   insn=0x0000000000230154 string=0x0000000000230158 "?"
 *   insn=0x0000000000230154 string=0x00000000002301B4 "A"
 *   insn=0x000000000023015C string=0x0000000000230160 "A"
 *   insn=0x0000000000230168 string=0x000000000023016C "`""
 *   insn=0x0000000000230170 string=0x0000000000230174 "M"
 *   insn=0x000000000023017C string=0x0000000000230180 ")"
 *   insn=0x0000000000230190 string=0x0000000000230194 ")=G"
 *   insn=0x0000000000230194 string=0x0000000000230198 "!"
 *   insn=0x0000000000230198 string=0x000000000023019C ")"
 *   insn=0x000000000023019C string=0x00000000002301A0 "\t"
 *   insn=0x000000000023019C string=0x0000000000230240 "\t"
 *   insn=0x00000000002301A0 string=0x00000000002301A4 "*"
 *   insn=0x00000000002301A4 string=0x00000000002301A8 "\n"
 *   insn=0x00000000002301AC string=0x00000000002301B0 "'"
 *   insn=0x00000000002301B0 string=0x000000000023024C "?"
 *   insn=0x00000000002301BC string=0x00000000002301C0 "`B"
 *   insn=0x00000000002301C4 string=0x00000000002301C8 "8"
 *   insn=0x00000000002301D0 string=0x00000000002301D4 ")"
 *   insn=0x00000000002301E4 string=0x00000000002301E8 ")=G"
 *   insn=0x00000000002301E8 string=0x00000000002301EC "!"
 *   insn=0x00000000002301F0 string=0x00000000002301F4 "\t"
 *   insn=0x00000000002301F4 string=0x00000000002301F8 "*"
 *   insn=0x00000000002301F8 string=0x00000000002301FC "\n"
 *   insn=0x0000000000230208 string=0x000000000023020C ""
 *   insn=0x000000000023020C string=0x0000000000230210 "hb"
 *   insn=0x0000000000230218 string=0x000000000023021C "A$"
 *   insn=0x000000000023021C string=0x00000000001F9320 "0'"
 *   insn=0x0000000000230240 string=0x0000000000230244 "*"
 *   insn=0x0000000000230244 string=0x0000000000230248 "\n"
 *   insn=0x0000000000230254 string=0x0000000000230258 "S"
 *   insn=0x0000000000230260 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000230268 string=0x000000000023026C "J"
 *   insn=0x0000000000230270 string=0x0000000000230274 "(a"
 *   insn=0x0000000000230280 string=0x0000000000230284 "J=G"
 *   insn=0x0000000000230284 string=0x0000000000230288 ")!"
 *   insn=0x000000000023028C string=0x0000000000230290 "*"
 *   insn=0x000000000023028C string=0x00000000002302FC "*"
 *   insn=0x0000000000230290 string=0x0000000000230294 "K"
 *   insn=0x0000000000230294 string=0x0000000000230298 "+"
 *   insn=0x00000000002302A0 string=0x00000000002302E0 "_"
 *   insn=0x00000000002302A8 string=0x00000000002302AC "J"
 *   insn=0x00000000002302B0 string=0x00000000002302B4 "(a"
 *   insn=0x00000000002302C0 string=0x00000000002302C4 "J=G"
 *   insn=0x00000000002302C4 string=0x00000000002302C8 ")!"
 *   insn=0x00000000002302CC string=0x00000000002302D0 "*"
 *   insn=0x00000000002302D0 string=0x00000000002302D4 "K"
 *   insn=0x00000000002302D4 string=0x00000000002302D8 "+"
 *   insn=0x00000000002302EC string=0x00000000002302F0 "-"
 *   insn=0x00000000002302F4 string=0x00000000002302F8 "sE"
 *   insn=0x00000000002302FC string=0x0000000000230300 "K"
 *   insn=0x0000000000230300 string=0x0000000000230304 "+"
 *   insn=0x0000000000230304 string=0x0000000000230308 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PortalComponent::SetValueForBindedProperty(
        Caver::PortalComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  _QWORD v7[3]; // [xsp+8h] [xbp-28h] BYREF

  v7[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( a2 )
  {
    case 3:
      *((_BYTE *)this + 152) = **((_BYTE **)a3 + 1);
      return;
    case 2:
      sub_56A528(v7, *((_QWORD *)a3 + 1));
      sub_56A6A8((char *)this + 144);
      v4 = (void *)(v7[0] - 24LL);
      if ( (__int64 *)(v7[0] - 24LL) == &qword_6FD2E0 )
        return;
      v5 = (unsigned int *)(v7[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v6 = __ldaxr(v5);
        while ( __stlxr(v6 - 1, v5) );
        goto LABEL_16;
      }
      break;
    case 1:
      sub_56A528(v7, *((_QWORD *)a3 + 1));
      sub_56A6A8((char *)this + 136);
      v4 = (void *)(v7[0] - 24LL);
      if ( (__int64 *)(v7[0] - 24LL) == &qword_6FD2E0 )
        return;
      v5 = (unsigned int *)(v7[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v6 = __ldaxr(v5);
        while ( __stlxr(v6 - 1, v5) );
        goto LABEL_16;
      }
      break;
    default:
      Caver::Component::SetValueForBindedProperty(this, a2, a3);
      return;
  }
  v6 = (*v5)--;
LABEL_16:
  if ( v6 <= 0 )
    operator delete(v4);
}

