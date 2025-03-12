class Weapon{
        public: 
            //The character attacks the enemy with the weapon they are currently equipped with. 
            void attack(/*Enemy enemy*/);
            //The character equips the weapon. 
            void equip(Weapon weapon/*, Character character*/);
            //describes the weapon in detail. 
            void describe();
    
        private:
            int valueWhenSold;
            int attackValue;
            std::string specialDescribe;
            int rarity;
            int maxBreak;
            //turns left to break
            int tltb;
            int cost;
};