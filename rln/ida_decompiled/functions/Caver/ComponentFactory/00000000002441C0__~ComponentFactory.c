/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002441C0
 * Mangled: _ZN5Caver16ComponentFactoryD2Ev
 * Demangled: Caver::ComponentFactory::~ComponentFactory()
 *
 * Callers: 1
 *   0x0000000000243E48  std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Component>*,std::vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>>,boost::intrusive_ptr<Caver::Component> const&)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAC30  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>> *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 20
 *   insn=0x00000000002441D4 string=0x00000000002441D8 "U"
 *   insn=0x00000000002441E4 string=0x00000000002441E8 "tZC"
 *   insn=0x00000000002441F0 string=0x0000000000244264 "t"
 *   insn=0x000000000024420C string=0x0000000000244210 "\t"
 *   insn=0x000000000024420C string=0x0000000000244224 "\t"
 *   insn=0x0000000000244210 string=0x0000000000244214 "*"
 *   insn=0x0000000000244214 string=0x0000000000244218 "\n"
 *   insn=0x0000000000244220 string=0x0000000000244230 "?"
 *   insn=0x0000000000244224 string=0x0000000000244228 "*"
 *   insn=0x0000000000244228 string=0x000000000024422C "\n"
 *   insn=0x0000000000244238 string=0x000000000024423C "Z"
 *   insn=0x0000000000244250 string=0x0000000000244208 "!"
 *   insn=0x0000000000244258 string=0x000000000024425C "A"
 *   insn=0x000000000024425C string=0x0000000000244260 "t"
 *   insn=0x0000000000244264 string=0x0000000000244270 "a\n@"
 *   insn=0x000000000024426C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000244274 string=0x0000000000244278 "n"
 *   insn=0x0000000000244278 string=0x00000000001FAC30 "0'"
 *   insn=0x0000000000244288 string=0x00000000002442A4 ""
 *   insn=0x00000000002442A4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ComponentFactory::~ComponentFactory(Caver::ComponentFactory *this)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x22
  unsigned int *v4; // x8
  int v5; // w9
  __int64 *v6; // x0

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 6);
  v3 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (__int64 *)(*v2 - 24LL);
      if ( v6 != &qword_6FD2E0 )
      {
        v4 = (unsigned int *)(*v2 - 8LL);
        if ( &pthread_create )
        {
          do
            v5 = __ldaxr(v4);
          while ( __stlxr(v5 - 1, v4) );
        }
        else
        {
          v5 = (*v4)--;
        }
        if ( v5 <= 0 )
          operator delete(v6);
      }
      ++v2;
    }
    while ( v2 != v3 );
    v2 = (_QWORD *)*((_QWORD *)this + 6);
  }
  if ( v2 )
    operator delete(v2);
  std::_Rb_tree<std::string,std::pair<std::string const,boost::function<Caver::Component * ()(void)>>,std::_Select1st<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::function<Caver::Component * ()(void)>>>>::_M_erase();
}

