/// \brief Fonction d'addition de deux nombre de type int64_t
///
/// La fonction d'addition est polymorphe, c'est à dire qu'elle
/// dépend du type des paramètres fournis. Celle-ci correspond
/// au type int64_t.
///
/// \param operandeA un entier 64bits
/// \param operandeB un entier 64bits
/// \return La somme des deux entiers 64bits fournis en paramètres
/// \sa ajouter(int32_t, int32_t), ajouter(double, double), ajouter(float, float)
///
int64_t ajouter(int64_t operandeA, int64_t operandeB)
{
  return operandeA + operandeB;
}

/// \brief Fonction d'addition de deux nombre de type int32_t
///
/// La fonction d'addition est polymorphe, c'est à dire qu'elle
/// dépend du type des paramètres fournis. Celle-ci correspond
/// au type int32_t.
///
/// \param operandeA un entier 32bits
/// \param operandeB un entier 32bits
/// \return La somme des deux entiers 32bits fournis en paramètres
/// \sa ajouter(int64_t, int64_t), ajouter(double, double), ajouter(float, float)
///
int32_t ajouter(int32_t operandeA, int32_t operandeB)
{
  return operandeA + operandeB;
}
