#include <string>
#include <vector>
extern std::vector<std::string> GetFilenamesInDir(const std::string& dirname, const std::string& filter);
extern std::string PromptToLoad();
extern std::string PromptToLoadDir();
extern std::string PruneName(const std::string& name);
extern std::string PruneDir(const std::string& name);

