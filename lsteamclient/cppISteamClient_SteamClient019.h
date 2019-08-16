extern HSteamPipe cppISteamClient_SteamClient019_CreateSteamPipe(void *);
extern bool cppISteamClient_SteamClient019_BReleaseSteamPipe(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient019_ConnectToGlobalUser(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient019_CreateLocalUser(void *, HSteamPipe *, EAccountType);
extern void cppISteamClient_SteamClient019_ReleaseUser(void *, HSteamPipe, HSteamUser);
extern void *cppISteamClient_SteamClient019_GetISteamUser(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamGameServer(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient019_SetLocalIPBinding(void *, uint32, uint16);
extern void *cppISteamClient_SteamClient019_GetISteamFriends(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamUtils(void *, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamMatchmaking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamMatchmakingServers(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient019_GetISteamGenericInterface(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamUserStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamGameServerStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamApps(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamNetworking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamRemoteStorage(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamScreenshots(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamGameSearch(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient019_RunFrame(void *);
extern uint32 cppISteamClient_SteamClient019_GetIPCCallCount(void *);
extern void cppISteamClient_SteamClient019_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern bool cppISteamClient_SteamClient019_BShutdownIfAllPipesClosed(void *);
extern void *cppISteamClient_SteamClient019_GetISteamHTTP(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient019_DEPRECATED_GetISteamUnifiedMessages(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamController(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamUGC(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamAppList(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamMusic(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamMusicRemote(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamHTMLSurface(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient019_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(void *, void *);
extern void cppISteamClient_SteamClient019_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(void *, void *);
extern void cppISteamClient_SteamClient019_Set_SteamAPI_CCheckCallbackRegisteredInProcess(void *, SteamAPI_CheckCallbackRegistered_t);
extern void *cppISteamClient_SteamClient019_GetISteamInventory(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamVideo(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamParentalSettings(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamInput(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamParties(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient019_GetISteamRemotePlay(void *, HSteamUser, HSteamPipe, const char *);