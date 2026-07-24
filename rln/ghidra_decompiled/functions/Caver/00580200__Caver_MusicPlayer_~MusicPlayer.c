/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00580200
 * Function: Caver::MusicPlayer::~MusicPlayer
 * Signature: undefined __thiscall ~MusicPlayer(MusicPlayer * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlayer::~MusicPlayer() */

void __thiscall Caver::MusicPlayer::~MusicPlayer(MusicPlayer *this)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 00580218 to 00680233 has its CatchHandler @ 00580168 */
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
              *)(this + 0x58),*(_Rb_tree_node **)(this + 0x68));
                    /* catch() { ... } // from try @ 005801f0 with catch @ 00580220 */
  plVar2 = *(long **)(this + 0x48);
                    /* catch() { ... } // from try @ 00580180 with catch @ 00580224 */
                    /* try { // try from 00580234 to 0068023f has its CatchHandler @ 00580240 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00580234 with catch @ 00580240 */
                    /* try { // try from 00580244 to 00680247 has its CatchHandler @ 0058024c */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
                    /* catch() { ... } // from try @ 00580244 with catch @ 0058024c */
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x38);
                    /* catch() { ... } // from try @ 005802e4 with catch @ 00580274
                       catch() { ... } // from try @ 00580388 with catch @ 00580274 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x18);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
                    /* try { // try from 005802e0 to 006802e3 has its CatchHandler @ 00580340 */
    plVar2[2] = lVar1 + -1;
                    /* try { // try from 005802e4 to 0068035f has its CatchHandler @ 00580274 */
    if (lVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00580310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
  return;
}


