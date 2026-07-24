/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00568364
 * Function: Caver::Scene::GroupWithIdentifier
 * Signature: undefined __cdecl GroupWithIdentifier(string * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::GroupWithIdentifier(std::string const&, bool) */

void Caver::Scene::GroupWithIdentifier(string *param_1,bool param_2)

{
  int iVar1;
  string *psVar2;
  SceneObjectGroup *this;
  long *plVar3;
  long *plVar4;
  string *psVar5;
  uint in_w2;
  long *in_x8;
  long lVar6;
  
                    /* catch() { ... } // from try @ 00568350 with catch @ 00568364 */
  psVar5 = (string *)(ulong)param_2;
                    /* catch() { ... } // from try @ 0056839c with catch @ 00568368 */
  psVar2 = (string *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                   *)(param_1 + 0xe0),psVar5);
                    /* try { // try from 00568398 to 0066839b has its CatchHandler @ 005683ac */
                    /* try { // try from 0056839c to 006683af has its CatchHandler @ 00568368 */
  if (param_1 + 0xe8 == psVar2) {
    if ((in_w2 & 1) == 0) {
      *in_x8 = 0;
    }
    else {
      this = operator_new(0x50);
      SceneObjectGroup::SceneObjectGroup(this);
      iVar1 = *(int *)(this + 8);
      *in_x8 = (long)this;
      *(int *)(this + 8) = iVar1 + 1;
      SceneObjectGroup::SetIdentifier(this,psVar5);
      plVar3 = (long *)std::
                       map<std::string,boost::intrusive_ptr<Caver::SceneObjectGroup>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                       ::operator[]((map<std::string,boost::intrusive_ptr<Caver::SceneObjectGroup>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                                     *)(param_1 + 0xe0),psVar5);
                    /* try { // try from 00568404 to 00668407 has its CatchHandler @ 005684a4 */
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      plVar4 = (long *)*plVar3;
      *plVar3 = (long)this;
      if ((plVar4 != (long *)0x0) &&
         (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  else {
    lVar6 = *(long *)(psVar2 + 0x28);
    *in_x8 = lVar6;
    if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 00568398 with catch @ 005683ac */
                    /* catch() { ... } // from try @ 005684cc with catch @ 005683b0 */
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    }
  }
  return;
}


