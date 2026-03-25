//원래는 이게 아니겠지만 시간이 없어 여기까지가 한계입니다.

class PotionRecipe 
{
public:
    // 생성자: 이름과 재료 목록을 초기화
    PotionRecipe(const std::string& name, const std::vector<std::string>& ingredients)
        : name_(name), ingredients_(ingredients) {
    }

    const std::string& GetName() const { return name_; }
    const std::vector<std::string>& GetIngredients() const { return ingredients_; }

private:
    std::string name_;
    std::vector<std::string> ingredients_;
};